#include <iostream>
using namespace std;

/* print first 20 Fib numbers, which 
 * are greater than x */
int main() {
	int a = 0, b = 1, x, t, it;
	cout << "Enter x : "; cin >> x;
	it = 1; while (it <= 20) {
		if (a > x) { cout << a <<'\n'; ++it; }
		t = a + b; a = b; b = t;
	}
}
