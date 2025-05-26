#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;

   public:
    DoublyList() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL";
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL)
            head = tail = newNode;
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAtHead() {
        if (head == NULL) {
            cout << "Empty List";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL) head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    void deleteFromTail() {
        if (head == NULL) {
            cout << "Empty List";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        }

        temp->prev = NULL;
        delete temp;
    }
};

int main(){
    DoublyList dll ; 
    dll.insertAtTail(1) ; 
    dll.insertAtTail(2) ; 
    dll.insertAtTail(3) ; 
    dll.insertAtTail(4) ; 
    dll.insertAtTail(5) ; 
    dll.print() ; 
    

    return 0 ; 
}