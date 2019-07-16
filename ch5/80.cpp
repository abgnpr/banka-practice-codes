#include <iostream>
using namespace std;

#define EXIT_VALUE -1

int main() {
	int n, i, k = 0;
	while (++k != EXIT_VALUE) {
		n = 5*k + 1;
		cout << "n=" << n << '\n';
		for(i = 0; n%4==0 && i<5; ++i)
			n = (5*n) / 4 + 1;
		if (i == 5) {
			cout << "nCoco=" << n << '\n';
			k = EXIT_VALUE;// to exit the while loop
		}
	}
}
