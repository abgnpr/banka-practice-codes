#include <iostream>
using namespace std;

int main() {

	int x, y, p, q, temp;

	cin >> x >> y; cout << endl;
	cin >> p >> q; cout << endl;

	while (p <= y) {
		if (p >= x)
			cout << p << " ";
		temp = p + q;
		p = q;
		q = temp;
	}
}
