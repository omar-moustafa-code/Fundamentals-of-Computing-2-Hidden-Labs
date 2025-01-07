#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node{1, nullptr};
    Node* node1 = new Node{5, nullptr};
    Node* node2 = new Node{8, nullptr};
    Node* node3 = new Node{3, nullptr};
    Node* node4 = new Node{4, nullptr};
    head -> next = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;

    cout << "Numbers In The Linked List: " << endl;
    Node* current = head;
    while (current != nullptr) {
        cout << current -> data << "\t";
        current = current -> next;
    }
    cout << endl;
    cout << endl;

    Node* previous = nullptr;
    current = head;
    while (current -> next != nullptr) {
        previous = current;
        current = current -> next;
    }
    delete current;
    previous -> next = nullptr;

    cout << "Remaining Numbers In The Linked List After Deleting The Last Node: " << endl;
    current = head;
    while (current != nullptr) {
        cout << current -> data << "\t";
        current = current -> next;
    }
    cout << endl;
    cout << endl;

    Node* node5 = new Node{12, nullptr};
    Node* node6 = new Node{21, nullptr};

    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;

    cout << "Numbers In The Linked List After Adding Two More Nodes: " << endl;
    current = head;
    while (current != nullptr) {
        cout << current -> data << "\t";
        current = current -> next;
    }
    cout << endl;
    cout << endl;



    return 0;

}
