/* How to manipulate vectors. */
#include <iostream>
#include <vector>

int main()
{
    int n, q;
    std::cin >> n >> q;
    std::vector<std::vector<int>> a(n);
    for (int i=0; i < n; i++) {
        int k;
        std::cin >> k;
        a[i].reserve(k);
        for (int j=0; j < k; j++) {
            int val;
            std::cin >> val;
            a[i].push_back(val);
        }
    }
    for (int i=0; i < q; i++) {
        int x, y;
        std::cin >> x >> y;
        std::cout << a[x][y] << std::endl;
    }
}
