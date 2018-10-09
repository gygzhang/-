#include"stringFun.h"

double charToDouble(char* p) {
	double re=0;
	int count = 0;
	//"123"
	while (p) {
		re = re*10 + *p - '0';
	}
	return re;
}