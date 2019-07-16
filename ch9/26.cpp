
#include <iostream>
using namespace std;

/* main : creates an array of 10 integers 
 * and print it after filling it with the 
 * factorials of first 10 natural numbers */
int main() {
    
    int facts[10];
    
    for (int i = 0; i < 10; ++i) {
        facts[i] = [=]()-> int {
            int f = 1;
            for (int j = 2; j <= i+1; ++j)
                f *= j;
            return f;
        }(/* immediate execution */);
    }
    
    for (int i = 0; i < 10; ++i)
        cout << facts[i] << '\n';

}