#include "task2.h"

bool checkPrime(unsigned int value){
	if ((value == 1) || (value == 0)){
		return false;
	}
	int u = 0;
	for (int i = 2; i < value; i++){
		if (value%i == 0){
			u = 1;
			return false;
		}
	}
	if (u!=1){
		return true;
	}
}

unsigned long long nPrime(unsigned n){
	int primeNum=0;
	int p=1;
	for (int i=2;; i++){
		if (checkPrime(i)==true){
			primeNum++;
		}
		if (primeNum==n){
			return i;
		}
	}
}

unsigned long long nextPrime(unsigned long long value){
	for (int i = value + 1;; i++){
		if (checkPrime(i)==true)
			return i;
	}
}