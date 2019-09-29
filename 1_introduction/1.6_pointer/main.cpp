/* How to manipulate pointers. */
#include <iostream>
#include <cmath>

void update(int *pa,int *pb) {
    int temp = *pa;
    *pa += *pb;
    *pb = std::abs(temp - *pb);
}

int main() {
    int a, b;
    int *pa=&a, *pb=&b;
    std::cin >> a >> b;
    update(pa, pb);
    std::cout << a << "\n"
              << b << std::endl;
}
