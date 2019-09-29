/* How to manipulate basic data types. */
#include <iostream>
#include <iomanip>

int main()
{
    int i = 3;
    long l = 12345678912345;
    char ch = 'a';
    float f = 334.23;
    double d = 14049.30493;
    // std::cin >> i >> l >> ch >> f >> d;
    std::cout << i << '\n'
              << l << '\n'
              << ch << '\n'
              << std::setprecision(3) << std::fixed << f << '\n'
              << std::setprecision(9) << d << std::endl;
}
