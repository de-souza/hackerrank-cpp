/* How to use for loops. */
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i=a; i <= b; i++)
        std::cout << (i>9 ? (i%2 ? "odd" : "even") : num[i-1]) << std::endl;
}
