#include<iostream>
#include <vector>
#include <functional>
using namespace std;

auto factors = [](int n) -> vector<int> {
    vector<int> facs;
    for (int i = 0; i <= n; ++i)
        if (n%i == 0) facs.push_back(i);
    return facs;
};

function<size_t(int)> fact = [](int n)->size_t{
    if (n==1 || n==0)
        return 1;
    return n * fact(n-1);
};

int main(void) {
    long double sum = 0.0;
    vector<int> facs;
    for (int i = 1; i <= 10; ++i) {
        facs =  factors(i);
        for (int j : facs) {
            sum += (j * 1.0) / fact(i);
        }
    }
    cout << sum << '\n';
}