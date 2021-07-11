// Pattern (Inverted-Half-Pyramid-Structure)

// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            std::cout << "  ";
        }
        for (int k = i; k > 0; k--) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}