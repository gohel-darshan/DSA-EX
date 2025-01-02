#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void displayList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    displayList(head); 
    
    Node* current = head;
    Node* nextNode;
    while (current) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
