#include <iostream>
using namespace std;

struct listNode {
    int val;
    listNode *next;
    listNode() : val(0), next(nullptr) {}
    listNode(int x) : val(x), next(nullptr) {}
    listNode(int x, listNode *next) : val(x), next(next) {}
};

// EFFECTS: Read in formatted input and return the head pointer of link list
listNode* inputList() {
    // DO NOT MODIFY THIS PART
    int n, tmp;
    cin >> n;
    cin >> tmp;
    listNode* head = new listNode(tmp);
    listNode* prev = head;
    for (int i = 0; i < n-1; i++) {
        cin >> tmp;
        listNode* newNode = new listNode(tmp);
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

// EFFECTS: Print the link list with given head pointer
void printList(listNode* head) {
    // DO NOT MODIFY THIS PART
    listNode* tmp = head;
    while (tmp) {
        cout << tmp->val << ' ';
        tmp = tmp->next;
    }
    cout << endl;
}

// EFFECTS: return sorted link list
listNode* listSort(listNode* head) {
    // Write your code here, feel free to add helper functions
    return nullptr;
}

// EFFECTS: delete allocated memory
void deleteList(listNode* head) {
    // DO NOT MODIFY THIS PART
    while (head) {
        listNode* tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main() {
    // DO NOT MODIFY THIS PART
    listNode* head = inputList();
    head = listSort(head);
    printList(head);
    deleteList(head);
    return 0;
}