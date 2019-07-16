#include <iostream>

/* print first 20 prime natural numbers*/
int main() {
	for (int i=1; i<=20; ++i)
		if( !([=]{int fc = 0, it = i; while (--it > 1) 
		    if(i%it==0) ++fc; return fc; }()) )
			std::cout << i << ' ';
}
