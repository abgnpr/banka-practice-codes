#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int n, x, power = 0;
    double k = 0;

    cout << "Enter n : ";
    cin >> n;

    while (n != 0)
    {
        x = n % 10;
        k = x * pow(10, power) + k;
        power += 1;
        n /= 10;
    }

    cout << "The result is : " << k;
}