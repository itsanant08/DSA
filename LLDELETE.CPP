#include <iostream>
using namespace std;

// Creating a node structure
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

// Function to delete a node
void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;

    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    // Creating linked list
    // 5 -> 10 -> 15 -> 20 -> NULL

    ListNode* head = new ListNode(5);
    head->next = new ListNode(10);
    head->next->next = new ListNode(15);
    head->next->next->next = new ListNode(20);

    cout << "Before deletion: ";
    printList(head);


    ListNode* node = head->next;

    // Delete node
    deleteNode(node);

    cout << "After deletion: ";
    printList(head);

    return 0;
}