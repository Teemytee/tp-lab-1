#include "task1.h"
int main() {
	unsigned long z;
	unsigned long k;
	unsigned int max = 20;
	unsigned int min = 10;
	z = findValue(1, 10); // менять интервал
	cout << "z=" << z << endl;
	k = findValue(1, 20);
	cout << "k=" << k << endl;
	system("pause");
	return 0;
}