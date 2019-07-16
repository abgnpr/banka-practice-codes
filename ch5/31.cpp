#include <iostream>
#include <math.h>

using namespace std;

/* main : print all armstrong numbers 
 * 	  from A to B */ 

int main(void) {
	int A, B, n, sum;

	cin >> A >> B;
	cout << endl;

	while (A <= B) {
		sum = 0; n = A;
		do sum += (int)pow((n%10),3);
		while ((n/=10) > 0);
		if (sum == A)
			cout << A << endl;
		++A;
	}
}
