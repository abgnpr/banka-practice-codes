#include <iostream>
using namespace std;

auto biggest = [](int x, int y) -> int {
    return x > y? x : y;
};

auto getANum = [](string s) -> int {
    int n;
    cout << s;
    cin >> n;
    return n;
};

auto findBiggest = [](int n) -> int {
    int big = getANum("first num: ");
    while (--n)
        big = biggest(big, getANum("next num: "));
    return big;
};

/* input 9 numbers and the print the one
 * that is biggest. */
int main(void) {
    cout << "\n\n"
         << findBiggest(9) 
         <<'\n';
    return 0;
}