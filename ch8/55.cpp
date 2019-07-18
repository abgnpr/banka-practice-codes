#include <iostream>
using namespace std;

auto sumFac_ex = [](int N) -> int {
    int sum = 0, n = N;
    while (--n > 0)
        if (N%n == 0) sum += n;
    return sum;
};

auto areAmicable = [](int x, int y) -> bool {
    if (sumFac_ex(x) == y
    &&  sumFac_ex(y) == x) 
        return true;
    else 
        return false;
};

auto getA_Num = [](string s) -> int {
    cout << s;
    int n; cin >> n;
    return n;
};

/* input 2 numbers and print if they are
 * amicable or not. */
int main(void) {
    areAmicable(getA_Num("B: "), getA_Num("A: "))?
    cout << "Amicable\n":
    cout << "Not Amicable\n";
}

/* finding amicable numbers between
 * 1 and 100 */
// int main() {
//     for (int i = 1; i <= 100; ++i) {
//         for (int j = 1; j <= 100; ++j) {
//             if (areAmicable(i, j))
//                 cout << i << ", " << j << '\n';
//         }
//     }
// }