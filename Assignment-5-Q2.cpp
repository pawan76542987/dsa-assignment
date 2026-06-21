// Middle node in a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class LinkedList {
    public:
    Node *head;

    LinkedList () {
        head = nullptr;
    }

    void insertFront(int x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

    Node* middleNode (Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void display () {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main () {
    LinkedList l;

    l.insertFront(10);
    l.insertFront(20);
    l.insertFront(30);
    l.insertFront(40);
    
    Node* mid = l.middleNode(l.head);
    cout << mid->data << endl;

    return 0;
}