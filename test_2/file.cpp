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
	const char * aa = str_a.c_str(); //string --> char

	int b = day;
	stringstream sb;
	sb << b;
	string str_b = sb.str();
	const char * bb = str_b.c_str(); //string --> char

	int c = month;
	stringstream sc;
	sc << c;
	string str_c = sc.str();
	const char * cc = str_c.c_str(); //string --> char

	int d = year;
	stringstream sd;
	sd << d;
	string str_d = sd.str();
	const char * dd = str_d.c_str(); //string --> char

	char ddm[110] = "cattel_";
	strcat(ddm, aa);
	strcat(ddm, "_");
	strcat(ddm, bb);
	strcat(ddm, "-");
	strcat(ddm, cc);
	strcat(ddm, "-");
	strcat(ddm, dd);
	strcat(ddm, ".xls");  
	cout << "ddm = " << ddm << endl;

	ofstream out_1(ddm);
	out_1.close();

	char ddn[110] = "cattel_all_";
	strcat(ddn, aa);
	strcat(ddn, "_");
	strcat(ddn, bb);
	strcat(ddn, "-");
	strcat(ddn, cc);
	strcat(ddn, "-");
	strcat(ddn, dd);
	strcat(ddn, ".dat");
	cout << "ddn = " << ddn << endl;

	ofstream out_2(ddn);
	out_2.close();

	char ddo[110] = "cattel_time_";
	strcat(ddo, aa);
	strcat(ddo, "_");
	strcat(ddo, bb);
	strcat(ddo, "-");
	strcat(ddo, cc);
	strcat(ddo, "-");
	strcat(ddo, dd);
	strcat(ddo, ".dat");
	cout << "ddo = " << ddo << endl;

	ofstream out_3(ddo);
	out_3.close();

	char ddp[110] = "cattel_chart_";
	strcat(ddp, aa);
	strcat(ddp, "_");
	strcat(ddp, bb);
	strcat(ddp, "-");
	strcat(ddp, cc);
	strcat(ddp, "-");
	strcat(ddp, dd);
	strcat(ddp, ".png");
	cout << "ddo = " << ddp << endl;

	//ofstream out_4(ddp);
	//out_4.close();

	strcpy(dd1, ddm);
	strcpy(dd2, ddn);
	strcpy(dd3, ddo);
	strcpy(dd4, ddp);

}