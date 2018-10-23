#include "task2.h"
#include <iostream>

using namespace std;
int main(){
	setlocale(0, "");
	cout << "проверка числа 10 на простоту (1 - да, 0 - нет) -" << checkPrime(10) << endl;
	cout << "нахождение 30-ого простого числа- " << nPrime(30) << endl;
	cout << "нахождение ближайшего следующего простого числа к 3490 - " << nextPrime(3490) << endl;
	system("pause");
	return 0;
}