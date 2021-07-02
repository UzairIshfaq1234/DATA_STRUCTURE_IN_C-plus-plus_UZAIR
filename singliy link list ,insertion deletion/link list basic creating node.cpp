#include <iostream>

using namespace std;

struct Node {
    
    int data;
    struct Node *next;    
    
};

main() {
    
    struct Node *headNode = new Node();
    headNode->data = 5;
    headNode->next = NULL;
    
    struct Node *newNode2 = new Node();
    newNode2->data = 6;
    newNode2->next = NULL;
    headNode->next = newNode2;
    
    struct Node *newNode3 = new Node();
    newNode3->data = 7;
    newNode3->next = NULL;
    newNode2->next = newNode3;
    
    struct Node *temp = headNode;
    
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }

}
