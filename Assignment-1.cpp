#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class LinkedList {
public:
    Node *head;

    LinkedList() {
        head = nullptr;
    }
    void insertFront(int x) {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
    void insertEnd(int x) {
        Node* newNode = new Node(x);
        if (head == nullptr) {
            head == newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertPosition(int pos, int x) {
        // Node* newNode = new Node(x);
        if (pos == 1) {
            insertFront(x);
            return;
        }
        Node* newNode = new Node(x);
        Node* temp = head;
        for (int i = 1; i < pos-1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void deleteFront() {
        if (head == nullptr) return;

        Node* temp = head;
        head = head->next;

        delete temp;
    }
    void deleteLast(Node*& head) {
        if (head == nullptr) return;

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        } 
        delete temp->next;
        temp->next = nullptr;
    }
    void deletePosition(Node*& head, int pos, int val) {
        if (head == nullptr) return;
        if (pos == 1) {

            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* curr = head;
        for (int i = 1; i < pos-1 && curr != nullptr; i++) {
            curr = curr->next;
        }
        if (curr == nullptr || curr->next == nullptr) return;

        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    bool search(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
                temp = temp->next;
            }
        }
        return false;
    }
    int sum(Node* head) {
        int total = 0;
        Node* temp = head;
        while (temp != nullptr) {
            total += temp->data;
            temp = temp->next;
        }
        return total;
    }
    int length(Node* head) {
        Node* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main () {
    LinkedList list;

    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);
    list.insertFront(40);

    list.insertEnd(10);

    list.insertPosition(3, 60);

    list.deleteFront();

    cout << list.search(30) << endl;

    list.display();

    return 0;

}