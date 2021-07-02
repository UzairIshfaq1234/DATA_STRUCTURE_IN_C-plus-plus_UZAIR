#include <iostream>
using namespace std;

struct Node {

    int data;
    struct Node *next;
    struct Node *prev;

};

int numberOfNodes = 0;
struct Node *head;
struct Node *tail;
struct Node *newNode;
struct Node *temp;
struct Node *temp2;

void createList(int data) {
    if (head != NULL && tail != NULL) {
        cout << "List is already created" << endl;
    } else {
        newNode = new Node();
        newNode->data = data;

        newNode->prev = NULL;
        newNode->next = NULL;

        head = newNode;
        tail = newNode;

        numberOfNodes++;
    }
}

void insertAtFirst(int data) {
    if (head == NULL && tail == NULL) {
        cout << "Create a list first" << endl;
    } else {
        newNode = new Node();
        newNode->data = data;

        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;

        head = newNode;

        numberOfNodes++;
    }
}

void insertAtLast(int data) {
    if (head == NULL && tail == NULL) {
        cout << "Create a list first" << endl;
    } else {
        newNode = new Node();
        newNode->data = data;

        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = NULL;

        tail = newNode;

        numberOfNodes++;
    }
}

void insertAtSpecificPosition(int position, int data) {
    newNode = new Node();
    newNode->data = data;

    temp = head;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    temp2 = temp->next;
    newNode->next = temp2;
    newNode->prev = temp;

    temp->next = newNode;
    temp2->prev = newNode;

    numberOfNodes++;
}

void display() {
    temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void deleteFirst() {
    temp = head;
    head = temp->next;
    head->prev = NULL;
    delete(temp);

    numberOfNodes--;
}

void deleteLast() {
    temp = tail;
    tail = temp->prev;
    tail->next = NULL;
    delete(temp);

    numberOfNodes--;
}


main() {

    createList(3);
    insertAtLast(4);
    insertAtLast(5);
    insertAtLast(6);

    insertAtSpecificPosition(3, 1000);

    deleteLast();

    display();

}
