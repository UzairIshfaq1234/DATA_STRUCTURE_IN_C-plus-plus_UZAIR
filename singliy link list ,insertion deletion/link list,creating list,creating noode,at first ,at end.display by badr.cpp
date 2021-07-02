#include <iostream>
using namespace std;

struct Node {
	
	int data;
	struct Node *next;
	
};

int numberOfNodes = 0;
struct Node *head;
struct Node *tail;
struct Node *temp;

void createList(int data) {		// creating a list
	if (head != NULL) {
		cout << "List is already created" << endl;
	} else {
		temp = new Node();
		head = temp;
		
		head->data = data;
		head->next = NULL;
		
		tail = head;
		
		numberOfNodes++;
	}	
}

void insertAtFirst(int data) {   // inserting a node at first
	if (head == NULL) {
		cout << "Create a list first" << endl;
	} else {
		temp = new Node();
		temp->data = data;
		temp->next = head;
		
		head = temp;
		
		numberOfNodes++;
	}
}

void insertAtLast(int data) {
	if (head == NULL) {
		cout << "Create a list first" << endl;
	} else {
		temp = new Node();
		temp->data = data;
		temp->next = NULL;
		tail->next = temp;
		
		tail = temp;
		
		numberOfNodes++;
	}
}

void displayList() {
	
	temp = head;
	
	while (temp != NULL) {
		cout << temp->data << endl;
		temp = temp->next;	
	}
}


main() {
	
	createList(4);	
	insertAtFirst(5);
	insertAtLast(3);
	
	displayList();
	
}
