#include <iostream>

/* print 10 prime fib numbers */
int main() {
	long it = 1, a = 0, b = 1, t;
	while (it <= 10) {
		if (a > 1 && !([a]{ long it = a, fc = 0;
		    while(--it > 1) if(a%it==0) {++fc; break;}
		    return fc; }())) {
			std::cout << a << '\n';
			++it;
		}
		t = a + b; a = b; b = t;
	}
}
