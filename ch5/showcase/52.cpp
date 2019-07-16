#include <iostream>
using namespace std;

/* create 2 numbers from a number;1 from
 * odd digs and another from even digs */
int main(void) {
	int n; cin >> n;

	int oddN, evenN;
	oddN = 0; evenN = 0;

	auto addDigTo = [=] (int &N, int dig) {
		N = N + dig * /*next radix*/[=]()mutable {
			int r = 1; // made mutable so that
			while (N > 0) {// we may make local changes
				r *= 10;// to N, that we have
				N /= 10;//captured locally.
			}
			return r;
		}()/*immediate invokation*/; 
	};

	int d; do { d = n % 10;
		    if (d%2 == 0) 
			addDigTo(evenN, d);
		    else      
			addDigTo(oddN , d);
	} while ((n/=10) > 0);

	
	cout << oddN  << endl;
	cout << evenN << endl;
}
