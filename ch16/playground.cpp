#include <iostream>
int main(int argc, char const *argv[])
{
    int *x;
    x = new int[10];

    x[0] = 10;
    x[1] = 20;
    std::cout << x[0] << " " << x[1] << '\n';

    return 0;
}
