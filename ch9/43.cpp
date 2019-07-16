#include <iostream>
using namespace std;

int main() {
	
	int arrA[5];
	for (int i = 0; i < 5; ++i) {
		cin >> arrA[i];
	}

	int arrB[5];
	for (int i = 0; i < 5; ++i) {
		arrB[i] = arrA[4-i];
	}
	
	for (int i = 0; i < 5; ++i) {
	  cout << arrB[i] << ' ';
	}
		
}