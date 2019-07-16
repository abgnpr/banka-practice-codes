#include <iostream>
using namespace std;

int main() {
	int a, i;
	cin >> a; if(a>1) {
	i = 1; while (i <= 5) {
		if (!([a]{ int fc = 0, i = a; 
			while(--i > 1) if(a%i==0) ++fc;
			return fc; }())) {
			[a]{for(int i=1; i<=10; ++i)
				cout <<a<<"x"<<i<<"="<<a*i<<'\n';}();
			cout << '\n';
			++a; ++i;
		} else { ++a; }
	}} else { cout << "invalid starting value!"; }
}
