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
	int sum_1 = 0;
	int sum_2 = 0;
	int sum_3 = 0;
	int sum_4 = 0;
	int sum_5 = 0;
	int sum_6 = 0;
	int sum_7 = 0;
	int sum_8 = 0;
	int sum_9 = 0;
	int sum_10 = 0;
	int sum_11 = 0;
	int sum_12 = 0;
	int sum_13 = 0;
	int sum_14 = 0;
	int sum_15 = 0;
	int sum_16 = 0;

	for (int i = 0; i < 187; i++)
	{
		if (array_2[i] == 1) // фактор А
		{
			sum_1 += array_3[i];
		}
		if (array_2[i] == 2) // фактор B
		{
			sum_2 += array_3[i];
		}
		if (array_2[i] == 3) // фактор C
		{
			sum_3 += array_3[i];
		}
		if (array_2[i] == 4) // фактор E
		{
			sum_4 += array_3[i];
		}
		if (array_2[i] == 5) // фактор F
		{
			sum_5 += array_3[i];
		}
		if (array_2[i] == 6) // фактор G
		{
			sum_6 += array_3[i];
		}
		if (array_2[i] == 7) // фактор H
		{
			sum_7 += array_3[i];
		}
		if (array_2[i] == 8) // фактор I
		{
			sum_8 += array_3[i];
		}
		if (array_2[i] == 9) // фактор L
		{
			sum_9 += array_3[i];
		}
		if (array_2[i] == 10) // фактор M
		{
			sum_10 += array_3[i];
		}
		if (array_2[i] == 11) // фактор N
		{
			sum_11 += array_3[i];
		}
		if (array_2[i] == 12) // фактор O
		{
			sum_12 += array_3[i];
		}
		if (array_2[i] == 13) // фактор Q1
		{
			sum_13 += array_3[i];
		}
		if (array_2[i] == 14) // фактор Q2
		{
			sum_14 += array_3[i];
		}
		if (array_2[i] == 15) // фактор Q3
		{
			sum_15 += array_3[i];
		}
		if (array_2[i] == 16) // фактор Q4
		{
			sum_16 += array_3[i];
		}

	}

	//int num[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	int sum_arr[16] = { sum_1, sum_2, sum_3, sum_4, sum_5, sum_6, sum_7, sum_8,
		sum_9, sum_10, sum_11, sum_12, sum_13, sum_14, sum_15, sum_16 };

	//int sum_norm[16] = {0};

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
	
	ofstream out(dd3, ios_base::app);
	out << "          Баллы    Нормированные баллы" << endl
	<< "Фактор A    " << sum_1 << "    " << sum_norm[0] << endl
	<< "Фактор B    " << sum_2 << "    " << sum_norm[1] << endl
	<< "Фактор C    " << sum_3 << "    " << sum_norm[2] << endl
	<< "Фактор E    " << sum_4 << "    " << sum_norm[3] << endl
	<< "Фактор F    " << sum_5 << "    " << sum_norm[4] << endl
	<< "Фактор G    " << sum_6 << "    " << sum_norm[5] << endl
	<< "Фактор H    " << sum_7 << "    " << sum_norm[6] << endl
	<< "Фактор I    " << sum_8 << "    " << sum_norm[7] << endl
	<< "Фактор L    " << sum_9 << "    " << sum_norm[8] << endl
	<< "Фактор M    " << sum_10 << "    " << sum_norm[9] << endl
	<< "Фактор N    " << sum_11 << "    " << sum_norm[10] << endl
	<< "Фактор O    " << sum_12 << "    " << sum_norm[11] << endl
	<< "Фактор Q1   " << sum_13 << "    " << sum_norm[12] << endl
	<< "Фактор Q2   " << sum_14 << "    " << sum_norm[13] << endl
	<< "Фактор Q3   " << sum_15 << "    " << sum_norm[14] << endl
	<< "Фактор Q4   " << sum_16 << "    " << sum_norm[15] << endl;
	out.close();

	/*char d[25] = "gg.csv";
	ofstream ggout(d, ios_base::app);
	out << sum_norm[0] << endl;
	out << sum_norm[1] << endl;*/
}