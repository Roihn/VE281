#include <iostream>
using namespace std;

// REQUIRES: an array A and its size n
// EFFECTS: sort array A
// MODIFIES: array A
void insertion_sort(int *A, int size) {
    for (int i = 1; i < size; i++) {
        int j = 0;
        while (j < i && A[i] >= A[j]) {
            j++; // Find the location to insert the value (Think about why we use >= here)
        }
        int tmp = A[i]; // Store the value we need to insert
        for (int k = i; k > j; k--) {
            A[k] = A[k-1];
        }
        A[j] = tmp;
    }
}


int main(){
    int A[5] = {2,1,4,5,3};
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    insertion_sort(A, 5);
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    return 0;
}