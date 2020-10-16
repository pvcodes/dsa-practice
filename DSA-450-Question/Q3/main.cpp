// Find the Kth minimum element of an array where all elements are more than or equal to 0

#include <iostream>
int max(int A[], int l) {
    int max = A[0];
    for (int i = 1; i < l; i++) {
        if (max < A[i]) max = A[i];
    }

    return max;
}
int Solution(int A[], int l, int k) {
    int n = max(A, l);
    int *H = new int[n + 1];
    int x = 0;
    for (int i = 0; i < l; i++) H[A[i]]++;

    for (int i = 0; i < n + 1; i++) {  // if you want to get max just loop the array from end
        if (H[i] > 0) {
            x++;
            if (x == k) {
                x = i;
                break;
            }
        }
    }
    delete H;
    return x;
}

int main() {
    int A[] = {1, 5, 10, 8, 7, 3, 9};
    int l = sizeof(A) / sizeof(A[0]);
    int k = 3;  // kth element
    std::cout << Solution(A, l, k) << std::endl;
    return 0;
}
