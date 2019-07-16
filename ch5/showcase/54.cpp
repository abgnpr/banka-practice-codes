#include <iostream>
using namespace std;

// print number of pallindrome fibonacci
// numbers starting from x and y.
int main() {
	
	int a, b, x, y, temp;
	
	cin >> a >> b;
	cin >> x >> y;

	while (y <= b) {
		if (y >= a && y == [=]()mutable -> int {
				int rev = 0;
				while (y > 0) {
					rev = rev*10 + y%10;
					y = y / 10;
				}
				return rev;
				}()){
			cout << y << endl;
		}
		temp = x + y;
		x = y;
		y = temp;
	}
}
