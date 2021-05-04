#include <iostream>
using namespace std;

// REQUIRES: an array A and its size n
// EFFECTS: sort array A
// MODIFIES: array A
void selection_sort(int *A, int size) {
    for (int i = 0; i < size; i++) {
        int max = A[i];
        int index = i;
        for (int j = i; j < size; j++) {
            if (max > A[j]) {
                index = j;
                max = A[j];
            }
        }
        A[index] = A[i];
        A[i] = max;
    }
}


int main(){
    int A[5] = {2,1,4,5,3};
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    selection_sort(A, 5);
    for (auto item: A) {
        cout << item << ',';
    }
    cout << endl;
    return 0;
}