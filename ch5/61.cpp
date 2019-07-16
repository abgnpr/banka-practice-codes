#include <iostream>

/* print first 20 prime natural no.s 
 * starting from 100 */
int main() {
	
	int n = 100, i = 1;
	while (i <= 20) {
		
		if (!( [=]{ int it=n, fc=0; 
		     while(--it > 1) if(n%it==0) ++fc;
		     return fc; }())
		   ) { 
			std::cout << n << '\n'; 
			++n; ++i; 
		
		} else { ++n;}
	}
}
