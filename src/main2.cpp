#include "task2.h"
#include <iostream>

using namespace std;
int main(){
	setlocale(0, "");
	cout << "�������� ����� 10 �� �������� (1 - ��, 0 - ���) -" << checkPrime(10) << endl;
	cout << "���������� 30-��� �������� �����- " << nPrime(30) << endl;
	cout << "���������� ���������� ���������� �������� ����� � 3490 - " << nextPrime(3490) << endl;
	system("pause");
	return 0;
}