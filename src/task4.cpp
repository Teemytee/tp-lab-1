#include <iostream>
#include <cstring>
#include <algorithm>
#include "task4.h"

char *sum(char *x, char *y) {
	int dlin = strlen(x), nlin = strlen(y), e = 0, cur = 0, n;
	n = std::max(dlin, nlin) + 1;
	if ((int)x[0]+(int)y[0]-96>9){
		n += 1;
		cur = 1;}
	char *res = new char[n + cur];
	if (cur == 1) {
		res[0] = 1;}
	res[n- 1] = '\0';
	for (int i = 0; i < std::max(dlin, nlin); i++) {
		cur = 0 + e;
		if (dlin - i - 1 >= 0) {
			cur += (int)x[dlin - i - 1] - 48;
		}
		if (nlin-i-1>=0){
			cur += (int)y[nlin-i-1]-48;
		}
		if (cur > 9){
			e=1;
			cur -=10;
		}
		else e=0;
		res[n-i-2]=(char)(cur+48);
	}
	if (e==1){
		res[0]=(char)49;
	}
	return res;
}