/* How to write functions. */
#include <iostream>

int max_of_four(int a, int b, int c, int d)
{
    if (a < b)
        a = b;
    if (a < c)
        a = c;
    if (a < d)
        a = d;
    return a;
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << max_of_four(a, b, c, d) << std::endl;
}
