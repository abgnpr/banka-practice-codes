#include <iostream>
#include <math.h>

using namespace std;

/* print the cube of each digit in a num*/
int main() {
	int n; cin >> n;

	int i, nd;

	// determine length
	nd = 0;
	for (i = n; i > 0; i /= 10)
		++nd;

	int p10 = (int)pow(10, nd-1);

	while (p10 > 1) {
		cout << pow(((n/p10)%10), 3) << endl;
		p10 /= 10;
	}
}
