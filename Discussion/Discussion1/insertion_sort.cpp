#include <iostream>
using namespace std;

// REQUIRES: an array A and its size n
// EFFECTS: sort array A
// MODIFIES: array A
void insertion_sort(int *A, size_t size) {
    for (size_t i = 1; i < size; i++) {
        size_t j = 0;
        while (j < i && A[i] >= A[j]) {
            j++; // Find the location to insert the value (Think about why we use >= here)
        }
        int tmp = A[i]; // Store the value we need to insert
        for (size_t k = i; k > j; k--) {
            A[k] = A[k-1];
        }
        A[j] = tmp;
    }
}

// EFFECTS: sort array A in a smarter way
void smart_insertion_sort(int*A, size_t size) {
    for (size_t i = 1; i < size; i++) {
        for (size_t j = i; j > 0; --j) {
            if (A[j] < A[j-1]) {
                swap(A[j], A[j-1]);
            }
        }
    }
}

int main(){
    int A[5] = {2,1,4,5,3};
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    insertion_sort(A, 5);
    // smart_insertion_sort(A, 5);
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    return 0;
}