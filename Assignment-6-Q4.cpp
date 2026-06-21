// Delete starting node
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
class DoubleyLL {
    public:
    Node* head = nullptr;

    DoubleyLL() {
        head = nullptr;
    }

    void insertFront(int x) {
        Node* newNode = new Node (x);
        if (head == nullptr){
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void deleteNode(Node* node) {
        if (node == nullptr) {
            return;
        }
        if (node == head) {
            head = node->next;
            if (head)
                head->prev = nullptr;
    }
        if (node->prev) {
            node->prev->next = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        }
        delete node;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main () {
    DoubleyLL dbl;

    dbl.insertFront(10);
    dbl.insertFront(20);
    dbl.insertFront(30);
    dbl.insertFront(40);

    dbl.deleteNode(dbl.head);

    dbl.display();
    return 0;

}