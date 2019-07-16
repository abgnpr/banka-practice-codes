#include <iostream>
using namespace std;

/* Enter a number and print the next prime */
int main()
{
    int n, a = 0, b = 1, found = 0;

    cout << "Enter n : ";
    cin >> n;

    while (!found)
    {
        ++n;
        if (!([=]() { 
            int x = n;
            while (--x > 1) {
                if (n%x == 0) return 1;
            } return 0; 
        }())){
            cout << n;
            found = 1;
        }
    }
}