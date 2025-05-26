#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

   public:
    List() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        cout << "NULL" << endl;
    }

    void deleteFromHead() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void deleteFromTail() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insertAtPosition(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position\n";
            return;
        }

        if (pos == 0) {
            insertAtHead(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key) {
        Node* temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) return idx;
            temp = temp->next;
            idx++;
        }

        return -1;
    }

    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};