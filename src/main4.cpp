#include <iostream>
#include <cstring>
#include <algorithm>
#include "task4.h"

int main() {
	char onest[] = "999999999999999998", scnd[] = "2";
	char *a = onest, *b = scnd;
	setlocale(0,""); 
	std::cout << "результат сложения 999999999999999998 + 1="<<sum(a, b)<<std::endl;
	system("pause");
	return 0;
}