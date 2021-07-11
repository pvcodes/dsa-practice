// Move all the negative elements to left side of the array

#include <iostream>

void Negative(int A[], int l) {
    int i = 0;
    int j = l - 1;

    while (i < j) {
        if (A[i] > 0 && A[j] < 0) {
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
            i++;
            j--;
        } else {
            if (A[i] < 0) i++;
            if (A[j] > 0) j--;
        }
    }
}

int main() {
    int A[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int l = sizeof(A) / sizeof(A[0]);
    Negative(A, l);
    for (auto &&i : A) std::cout << i << " ";
    return 0;
}
