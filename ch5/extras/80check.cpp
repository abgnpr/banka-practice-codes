#include <iostream>
using namespace std;

int main() {
	int n = 15621;
	for (int i = 1; i <= 5; ++i)
		n = (n-1) - ((n-1)/5);
	cout << n << '\n';
};
