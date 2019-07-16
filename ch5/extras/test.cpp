#include <iostream>
#include <vector>
using namespace std;

int main() {
        int N; 
	
	cout << "Enter N: "; 
	cin >> N; cout << endl;
                          
        vector<int> digits;
        
        do { digits.push_back(N%10);}
        while((N/=10)>0);

	auto it =  digits.cbegin();
	cout << *it;
}
