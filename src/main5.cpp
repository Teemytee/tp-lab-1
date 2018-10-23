#include "task5.h"
#include <iostream>

using namespace std;


int main(){
	char **result = nullptr;
	int u = 0;
	const char *buf = "Name/Game/Came";
	split(&result, &u, buf, '/');
	cout << u << endl;
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	system("pause");
	return 0;
}