#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
};

void push(node** head, int newdata) {
    node* newnode = new node();
    newnode->data = newdata;
    newnode->prev = NULL;
    newnode->next = (*head);

    if ((*head) != NULL)
        (*head)->prev = newnode;

    (*head) = newnode;
}

void printlist(node* node) {
    while (node != NULL) {
        cout << node->data << " "; // Correctly print the data
        node = node->next;         // Move to the next node
    }
}

// Uncomment and implement this function as needed
// void insertafter(node* prevnode, int newdata) {
//     if (prevnode == NULL) {
//         cout << "The given node is NULL";
//         return;
//     }
// }

int main() {
    node* head = NULL;
    push(&head, 2);
    push(&head, 3);
    push(&head, 5);
    push(&head, 7);

    cout << "Doubly linked list: ";
    printlist(head);

    return 0;
}
