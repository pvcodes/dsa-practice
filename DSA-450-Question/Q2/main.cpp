// Find the min and max of an array with minimum comparasion possible

#include <iostream>

struct Pair {
    int min;
    int max;
};

//-----------------------------------------------------------------------------------------------------------------------
// Solution 1
//-----------------------------------------------------------------------------------------------------------------------
// In this solution we have 2(n-1) comparasion where n is the len of arr and time complexity is O(n)
Pair Solution1(int A[], int aLen) {
    Pair r = {A[0], A[0]};
    for (int i = 1; i < aLen; i++) {
        if (r.min > A[i]) {
            r.min = A[i];
        } else if (r.max < A[i]) {
            r.max = A[i];
        }
    }

    return r;
}

//-----------------------------------------------------------------------------------------------------------------------
// Solution 2
//-----------------------------------------------------------------------------------------------------------------------
// In this solution we the comparasion are distinguished if len of arr is even we have (3n/2)-2
// and for odd we have 3(n-1)/2 i.e., odd has less comparasion then even
Pair Solution2(int A[0], int aLen) {
    Pair r;
    int i;  // index var

    if (aLen % 2 == 0) {  // if even
        if (A[0] < A[1]) {
            r.min = A[0];
            r.max = A[1];
        } else {
            r.min = A[1];
            r.max = A[0];
        }
        i = 2;  // i.e., the comparasion start from index 2
    } else {    // if odd
        r.min = A[0];
        r.max = A[0];
        i = 1;  // i.e., the comparasion start from index 1
    }

    // Now comparasion start
    while (i < aLen - 1) {
        if (A[i] < A[i + 1]) {
            if (A[i] < r.min) r.min = A[i];
            if (A[i + 1] > r.max) r.max = A[i + 1];
        } else {
            if (A[i + 1] < r.min) r.min = A[i + 1];
            if (A[i] > r.max) r.max = A[i];
        }
        // Here we are comparaing in pairs i.e., two comparasion are done simultaneosly
        i += 2;
    }
    return r;
}

int main() {
    int A[] = {1, 2, 8, -8, 10, -0, 400};
    int l = sizeof(A) / sizeof(A[0]);
    Pair aPair = Solution2(A, l);
    std::cout << "Min: " << aPair.min << "\nMax: " << aPair.max << std::endl;
    return 0;
}