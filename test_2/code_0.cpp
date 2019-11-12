#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void code_0(double &a, char(&dd1)[110])
{
	SYSTEMTIME st;
	GetLocalTime(&st);
	int hour = st.wHour;
	int min = st.wMinute;
	int sec = st.wSecond;
	int msec = st.wMilliseconds;
	double second = min + (0.01 *(sec + (msec * 0.001)));
	a = second;

	time_t now;
	struct tm nowlocal;
	now = time(NULL);
	nowlocal = *localtime(&now);
	int sec1 = nowlocal.tm_sec;

	ofstream out(dd1, ios_base::app);
	out << "0.000" << "\t" << "0" << endl;
}