#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void cattel_time(double array_start[187], double array_end[187], char(&dd3)[110])
{
	double sum[187];
	double s = 0;

	ofstream out(dd3, ios_base::app);

	out << "№ таблицы" << "     Время     " << endl;
	out <<  "vopros" << 1 << " :     " << (array_end[0] - array_start[0]) << endl;
		
		for (int i = 1; i < 187; i++)
		{
			out << "vopros" << i+1 << " :     " << (array_start[i] - array_end[i]) * (-1) << endl;
			sum[i-1] = (array_start[i] - array_end[i]) * (-1);
		}

		for (int i = 0; i < 187; i++)
		{
			s += sum[i];
		}

		out << "Общее время: " << s << endl;

}