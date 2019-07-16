#include <iostream>
using namespace std;

/* print first 5 special numbers starting
 * from 1 */
int main() {
	
	/* x is special if sum of fact of 
	 * each digit of x is equal to x. */
	auto special = [](int n) -> bool {
		int s = 0, x = n;
		do  { s += n % 10;
		} while (n /= 10);
		if(s == x) return true;
		else	   return false;
	};

	int i = 0, n = 1; 
	while (i < 5) {
		if (special(n)) {
			cout << n << ' ';
			++n; ++i;
		
		} else { ++n; }
	}
}
