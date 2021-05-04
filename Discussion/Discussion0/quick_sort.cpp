#include <iostream>
using namespace std;

// EFFECTS: partition the array with first element as pivot
int partition(int *A, size_t left, size_t right) {
    size_t i = left - 1;
    int x = A[right];
    for (size_t j = left; j < right; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[right]);
    return i+1;
}

// REQUIRES: an array A, and two ints left and right
// EFFECTS: sort array A
// MODIFIES: array A
void quick_sort(int *A, size_t left, size_t right) {
    if (left >= right) return;
    size_t pivot_index = partition(A, left, right);
    if (pivot_index != 0) quick_sort(A, left, pivot_index-1);
    quick_sort(A, pivot_index+1, right);
}

int main(){
    int A[5] = {5,2,3,4,1};
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    quick_sort(A, 0, 4);
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    return 0;
}