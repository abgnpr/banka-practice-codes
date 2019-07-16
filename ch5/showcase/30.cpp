#include <iostream>
using namespace std;

/* fact : return factorial of x */
int fact(int x) {
	int i = 1, f = 1;
	while(i <= x){
		f *= i;
		++i;
	}
	return f;
}

/* sumFactDig : returns sum of the factorials
 * 		of all digits in x */
int sumFactDig(int x) {
	int s = 0;
	while (x > 0) {
		s += fact(x%10);
		x  = x / 10;
	}
	return s;
}

/* main : prints all special numbers 
 * 	  special numbers between
 * 	  500 to 2500. */
int main(void) {
	int x = 0;
	while(++x <= 2500)
		if (sumFactDig(x) == x)
			cout << x << endl;
	return 0;
}
