/* How to use conditional statements. */
#include <iostream>
#include <limits>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string messages[] = {"Greater than 9", "one", "two", "three", "four",
                              "five", "six", "seven", "eight", "nine"};
    std::cout << (n > 9 ? messages[0] : messages[n]) << std::endl;
}
