// Pattern Half Pyramid Structure

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int x = n;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1 - i; j > 0; j--) {
            std::cout << "  ";
        }
        for (int k = i + 1; k > 0; k--) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}