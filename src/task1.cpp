#include "task1.h"
unsigned long findValue(unsigned int min, unsigned max){
	unsigned long long nam = max;
	while (true){
		int u = 0;
		for (unsigned long k = min; k < max + 1; k++){
			if ((nam % k) == 0)
				u++;
		}
		if (u == (max - min + 1)) {

			return nam;
		}
		nam++;
	}
}