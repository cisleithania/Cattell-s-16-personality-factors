#include "Arr.h"
#include "code_0.h"
#include "code_1.h"
#include "code_2.h"
void func_button(double &second, int question, int number, int factor, int point, double start_time, double end_time)
{
	static int v = 0;
	v++;
	int next_question = v+1;
	array_1[v-1] = number;
	array_2[v-1] = factor;
	array_3[v-1] = point;
	code_2(question, number, point, second, end_time, dd1);
	if (v!=187) code_1(next_question, second, start_time, dd1);
	array_start[v] = start_time;
	array_end[v-1] = end_time;
}