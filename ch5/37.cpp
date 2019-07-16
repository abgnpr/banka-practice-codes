#include <iostream>
#include <vector>
using namespace std;

int main() {

	int  ld, len, i, d;
	vector<int> digits;
	vector<int> sorted;
	
	cout << "Enter N: ";
	long N; cin >> N;

	do { ld = N%10; digits.push_back(ld);
	} while ((N/=10) > 0);

	len = digits.size();

	d = 0; do { 
		i = 0; do {
		     if (digits[i] == d)
			     sorted.push_back(d);
	     	} while (++i < len);
	} while (++d <= 9);

	for (auto z : sorted)
		cout << z << " ";
	cout << endl;
}