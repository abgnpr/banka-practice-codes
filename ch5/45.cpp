#include <iostream>
using namespace std;

int sumOfDigs(int x) {
	int s = 0; 
	do { s += x % 10;
	} while ((x /= 10) > 0);
	return s;
}

int main() {
	int s; cin >> s; cout << endl;
	while ((s=sumOfDigs(s)) > 9);
	if (s == 1) cout << "Its magic bitch!";
	else        cout << "Not a magic number.";
}
