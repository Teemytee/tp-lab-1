#include "task3.h"
#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound)
{
	long long t = 0;
	for (int i = 2; i < hbound; i++){
		if (checkPrime(i)){
			t = t + i;
		}
	}
	return t;
}