#include <iostream>
using namespace std;

/* enter a number, print it after adding
 * 1 to each of its digits */
int main(void) {
	
	auto add1 = [] (int d) -> int {
		if (d == 9) return 0;
		else return d + 1;
	};

	int n, N, m10;; 
	cin >> n;
	
	N = 0; m10 = 1;  do { 
		N += m10 * add1(n%10);
		m10 *= 10;
	} while (n /= 10);

	cout << N << endl;

}
