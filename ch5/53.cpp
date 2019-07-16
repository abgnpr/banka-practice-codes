#include <iostream>
using namespace std;

int main(void) {
	
	int x, y, temp;

	x = y = 1; // seeds
	while (y <= 10000) {
	    if (y >= 100) {
		cout << "y=" << y << "\t";
	        [=]() mutable {  
		    int r=0; do { r = r*10 + y%10;
		    } while ((y/=10) > 0);
		    cout << "r=" << r << endl;
		}();
	    }
	    temp = x + y;
	    x = y;
	    y = temp;
	}
}
