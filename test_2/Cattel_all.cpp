#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
#include "w_16_19.h"
#include "w_20_24.h"
#include "w_25_33.h"
#include "w_34_45.h"
#include "w_46_55.h"
#include "m_16_19.h"
#include "m_20_24.h"
#include "m_25_33.h"
#include "m_34_45.h"
#include "m_46_60.h"
using namespace std;

void cattel_all(int sum_norm[16], int age_1, int array_2[187], int array_3[187], double array_start[187], double array_end[187], char(&dd3)[110])
{
	
	int sum_arr[16];
	std::fill(std::begin(sum_arr), std::end(sum_arr), 0);

	for (int i = 0; i < 187; i++) {
		int index = array_2[i] - 1;
		if (index >= 0) {
			sum_arr[index] += array_3[i];
		}
	}

	switch (age_1) //нормирование
	{
	case 1: //женщины <19
		w_16_19(sum_arr, sum_norm);
		break;
	case 2: //женщины 20-24
		w_20_24(sum_arr, sum_norm);
		break;
	case 3: //женщины 25-33
		w_25_33(sum_arr, sum_norm);
		break;
	case 4: //женщины 34-45
		w_34_45(sum_arr, sum_norm);
		break;
	case 5: //женщины >46
		w_46_55(sum_arr, sum_norm);
		break;
	case 6: //мужчины <19
		m_16_19(sum_arr, sum_norm);
		break;
	case 7: //мужчины 20-24
		m_20_24(sum_arr, sum_norm);
		break;
	case 8: //мужчины 25-33
		m_25_33(sum_arr, sum_norm);
		break;
	case 9: //мужчины 34-45
		m_34_45(sum_arr, sum_norm);
		break;
	case 10: //мужчины >46
		m_46_60(sum_arr, sum_norm);
		break;
	}
	
	const char letters[16] = { 'A', 'B', 'C', 'E', 'F', 'G', 'H', 'I', 'L', 'M', 'N', 'O', 'Q1', 'Q2', 'Q3', 'Q4' };

	ofstream out(dd3, ios_base::app);
	out << "          Баллы    Нормированные баллы" << endl;

	for (int i = 0; i < 16; i++) {
		out << "Фактор " << letters[i] << "    " << sum_arr[i] << "    " << sum_norm[i] << endl;
	}

}