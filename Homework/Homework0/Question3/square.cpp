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

int main(){
    int A[5] = {-4, -1, 0, 3, 10};
    size_t sizeA = 5;
    for (size_t i = 0; i < sizeA; i++) { //Calculate the square of input array
        A[i] = A[i] * A[i];
    }
    insertion_sort(A, sizeA);
    for (auto item: A) {
        cout << item << ' ';
    }
    cout << endl;
    return 0;
}