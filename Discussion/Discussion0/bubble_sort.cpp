#include <iostream>
using namespace std;

// REQUIRES: an array A and its size n
// EFFECTS: sort array A
// MODIFIES: array A
void bubble_sort(int *A, int size) {
    for (int i = size-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
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
    bubble_sort(A, 5);
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    return 0;
}