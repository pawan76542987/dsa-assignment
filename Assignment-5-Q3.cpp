//  Linked list Cycle
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

    bool hasCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next;

            if(slow == fast) {
                return true;
            }
        }
        return false;
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
    
    if (l.hasCycle(l.head)) cout << "True" << endl;
    else cout << "False" << endl;

    return 0;
}