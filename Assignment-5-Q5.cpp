//  Pallindrome Linked List
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

    Node* reverse (Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    bool isPallindrome(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        } 
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* right = reverse(slow);
        Node* left = head;

        while (right) {
            if (left->data != right->data) {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
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
    l.insertFront(20);
    l.insertFront(10);

    if (l.isPallindrome(l.head)) cout << "True" << endl;
    else cout << "False" << endl;

    return 0;
}