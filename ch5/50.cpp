#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	
	auto sumOfDigs = [] (int x) {
		int s = 0; do { s += x%10;
		} while ((x /= 10) > 0);
		return s;
	};

	auto isPrime = [] (int x) {
		int i = 0, nf = 0;
		 while (++i < x)
			if (x%i == 0)
				++nf;
		 return nf;
	};

	int i = 1, s = 0;
	while (++i < n) if (/*i is a factor of n*/(n%i == 0) && 
				/*i is prime*/ isPrime(i))
			s += sumOfDigs(i);
	
	if (sumOfDigs(n) == s)
		cout << "Yes";
	else 
		cout << "No";
}
