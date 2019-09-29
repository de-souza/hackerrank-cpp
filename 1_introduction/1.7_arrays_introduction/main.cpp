/* How to manipulate arrays. */
#include <iostream>

int main() {
    int n, i;
    std::cin >> n;
    int *arr = new int[n];  /* Variable length arrays are forbidden in C++. */
    for (i = 0; i < n; i++)
        std::cin >> arr[i];
    for (i = n; i > 0; i--)
        std::cout << arr[i-1] << " ";
    std::cout << std::endl;
    delete[] arr;
}
