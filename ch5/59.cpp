#include <iostream>

/* print fib numbers within x and y,
 * seed : 0 and 1 */
int main() {
	int a, b, x, y, t;
	a = 0; 
	b = 1;
	std::cin >> x >> y;
	while (a <= y) {
		if (a >= x) std::cout << a << '\n';
		t = a + b;
		a = b;
		b = t;
	}
}
