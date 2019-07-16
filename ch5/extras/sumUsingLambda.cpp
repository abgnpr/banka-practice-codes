#include <iostream>
using namespace std;

int main() {

	auto sum = [](int x, int y) -> int {return x+y;};
	int  s = sum(10, 20);
	cout << sum(5,2)   << endl;
	cout << sum(10,-1) << endl;
	cout << s << endl;
}
