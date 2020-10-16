// Reverse the array

#include <iostream>

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void Solution(int A[], int l) {
    int i = 0;
    int j = l - 1;
    for (i, j; i < l / 2; i++, j--) swap(A[i], A[j]);
}

int main() {
    int A[] = {1, 4, 78, 1, 40, -1, 25};
    int l = sizeof(A) / sizeof(A[0]);  // length of the array

    Solution(A, l);
    for (auto &&i : A) std::cout << i << " ";

    return 0;
}

// Here we use the binary method i.e., we have taken two index pointer (i and j) and swap them, then
// increase i (i++) and decreased j (j--). It time complexity is O(n)