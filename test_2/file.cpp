#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

void file(int sec, int day, int month, int year, char(&dd1)[110], char(&dd2)[110], char(&dd3)[110], char(&dd4)[110])
{
	int a = sec;
	stringstream sa;
	sa << a;
	string str_a = sa.str();
	const char * aa = str_a.c_str();

	int b = day;
	stringstream sb;
	sb << b;
	string str_b = sb.str();
	const char * bb = str_b.c_str();

	int c = month;
	stringstream sc;
	sc << c;
	string str_c = sc.str();
	const char * cc = str_c.c_str();

	int d = year;
	stringstream sd;
	sd << d;
	string str_d = sd.str();
	const char * dd = str_d.c_str();

	char ddm[110];
	sprintf(ddm, "cattel_%s_%s_%s_%s.dat", aa, bb, cc, dd);
	ofstream out_1(ddm);
	out_1.close();

	char ddn[110];
	sprintf(ddn, "cattel_all_%s_%s_%s_%s.dat", aa, bb, cc, dd);
	ofstream out_2(ddn);
	out_2.close();

	char ddo[110];
	sprintf(ddo, "cattel_time_%s_%s_%s_%s.dat", aa, bb, cc, dd);
	ofstream out_3(ddo);
	out_3.close();

	char ddp[110];
	sprintf(ddp, "cattel_chart_%s_%s_%s_%s.png", aa, bb, cc, dd);

	strcpy(dd1, ddm);
	strcpy(dd2, ddn);
	strcpy(dd3, ddo);
	strcpy(dd4, ddp);

}