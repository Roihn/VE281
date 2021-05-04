#include <iostream>
using namespace std;

// EFFECTS: helper function of merge
void merge_helper(int *A, size_t sizeA, int *B, size_t sizeB, int *C) {
    for (size_t i = 0, j = 0, k = 0; k < sizeA + sizeB; ++k) {
        if (i == sizeA) {
            C[k] = B[j++];    
        }else if (j == sizeB) {
            C[k] = A[i++];
        }else{
            C[k] = (A[i] <= B[j]) ? A[i++] : B[j++];
        }
    }
}

// EFFECTS: merge two sorted arrays
void merge(int *A, size_t left, size_t mid, size_t right) {
    size_t sizeA = mid - left + 1;
    size_t sizeB = right - mid;
    int *tmpA = new int[sizeA], *tmpB = new int[sizeB];
    for (size_t i = left; i <= mid; i++) {
        tmpA[i-left] = A[i];
    }
    for (size_t i = mid+1; i <= right; i++) {
        tmpB[i-mid-1] = A[i];
    }
    int *tmpC = new int[sizeA + sizeB];
    merge_helper(tmpA, sizeA, tmpB, sizeB, tmpC);
    for (size_t i = left; i <= right; i++) {
        A[i] = tmpC[i-left];
    }
    delete tmpA, tmpB, tmpC;
}

// REQUIRES: an array A, and two ints left and right
// EFFECTS: sort array A
// MODIFIES: array A
void merge_sort(int *A, size_t left, size_t right) {
    if (left >= right) return;
    size_t mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid+1, right);
    merge(A, left, mid, right);
}


int main(){
    int A[5] = {2,1,4,5,3};
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    merge_sort(A, 0, 4);
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    return 0;
}