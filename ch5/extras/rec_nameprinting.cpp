#include <iostream>
using namespace std;

int main() {
	
	void f = [](int i, int N) -> void {
		cout << N << endl;
		if (i > 1) return f(i-1, N);
	};
	
	f(10, 25);
}
