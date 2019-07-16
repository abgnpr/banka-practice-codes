#include <iostream>
using namespace std;

int main(void) {

	int nPeople;
	long int N, amt, collection;

	cout << "Enter target amount: ";
	cin  >> N; cout << endl;

	collection = nPeople = 0;

	do {
		cout << "Enter amount: ";
		cin  >> amt;

		collection += amt;
		++nPeople;
	
	} while (collection < N);

	cout << endl;
	cout << "Amount collected    : " << collection << endl;
	cout << "Total contributions : " << nPeople    << endl;
}

