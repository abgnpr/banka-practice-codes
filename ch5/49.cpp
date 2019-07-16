#include <iostream>
using namespace std;

int main(void) {
	int a,b; cin >> a >> b;

	int s = 0;
	while (a > 0) {
		if /*a is odd*/(a%2 != 0)
			s += b;
		a /= 2;
		b *= 2;
	}

	cout << s << endl;
}
