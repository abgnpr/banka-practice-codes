#include <iostream>
using namespace std;

/* enter two numbers and print their HCF*/ 
int main(void) {
	
	int x, y, i, hcf;

	cin >> x >> y;

	i = 0; hcf = 1;
	while (++i <= ((x<y)?x:y))
		if (x%i==0 && y%i==0)
			hcf = i;

	cout << hcf << endl;
}
