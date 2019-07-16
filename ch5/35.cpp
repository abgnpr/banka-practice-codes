#include <iostream>
#include <math.h>
using namespace std;

/* input a positive number
 * and print its square root.*/

int main(void) {

	int N;

	do {
		cout << "Enter N : ";
		cin  >> N; cout << endl;
	
	} while (N < 0);

	cout << sqrt(N) << endl;

}