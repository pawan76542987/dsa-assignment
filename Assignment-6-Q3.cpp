// Insert at end
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

    void insertEnd(int x) {
        Node * newNode = new Node(x);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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

    dbl.insertFront(20);
    dbl.insertFront(30);
    dbl.insertFront(40);
    dbl.insertFront(50);

    dbl.insertEnd(10);

    dbl.display();
    return 0;

}