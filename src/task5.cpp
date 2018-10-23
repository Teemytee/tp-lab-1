#include "task5.h"
#include <iostream>
using namespace std;
void split(char ***result, int *N, const  char *buf, char ch){
	int r = 0;
	int t;
	for (int i=0; buf[i]!='\0';i++){
		if (buf[i]==ch){
			r++;
		}
		t=i;
	}
	(*result) = (char **)malloc((r + 1) * sizeof(char *));
	char *part = new char[t + 1];
	r=1;
	t=0;
	(*result)[0]=part;
	while (buf[t]!='\0'){
		part[t]=buf[t];
		if (buf[t]==ch){
			(*result)[r]=part+(t+1);
			part[t]='\0';
			r++;
		}
		t++;
	}
	part[t] = '\0';
	*N = r;
}