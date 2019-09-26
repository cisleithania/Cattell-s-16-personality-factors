#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void code_2(int question, int number, int point, double &a, double &b, char(&dd1)[110])
{
	SYSTEMTIME st;
	GetLocalTime(&st);
	int msec = st.wMilliseconds;
	int sec = st.wSecond;
	int min = st.wMinute;
	int hour = st.wHour;
	double second = min + (0.01 *(sec + (msec * 0.001)));
	double second_1 = second - a;
	double second_2 = second_1 * 60;
	b = second_2;

	time_t now;
	struct tm nowlocal;
	now = time(NULL);
	nowlocal = *localtime(&now);
	int sec1 = nowlocal.tm_sec;

	ofstream out(dd1, ios_base::app);
	//out << second_2 << "     2     " << question << "     " << number << "     " << point << endl;
	out << second_2 << "\t" << "2" << "\t" << question << "\t" << number << "\t" << point << endl;

	//out << sec << "," << msec << "     2     " << table << "     " << number << "     " << correct_10 << endl;  - я не помню зачем эта строка 
}