#include <iostream>
using namespace std;

/* print the series,
 * 10, 13, 17, 25, 32, 37, 47, 58..upto 200 */
int main(void) {
	int x, s, a = 10;
	while (a <= 200){
		cout << a << endl;
		x = a; s = 0; do { s += x%10;
		} while ((x/=10)>0);
		a += s;
	}
}
