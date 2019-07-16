#include <iostream>
using namespace std;

int main(void) {
	int a, b, h, r;
	cin >> a >> b;
	while ((r=a%b) != 0) {
		a = b;
		b = r;
	}
	cout << "HCF : " << b;
}
