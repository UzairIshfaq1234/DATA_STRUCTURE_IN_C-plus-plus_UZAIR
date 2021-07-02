#include <iostream>
using namespace std;

// linklist node
//structure

struct Node
{
int data;
struct Node *next;
};
//node * head, * tail

// insertion at the biginning of the list
void insert (struct Node **head, int value)
{
// create node
struct Node *newNode = new Node;
//data assign into the node
newNode->data = value;
// set next of the new node as head
newNode-> next = (*head);
// move head
(*head) = newNode;
}

//display lsit
void displaylist (struct Node *node)
{
while (node!=NULL)
{
cout<<node->data<<"->";
node=node->next;
}
/*if(node==NULL)
{

cout<<"empty";
}*/
}

//main function
int main()
{
//list empty
struct Node * head =NULL;

//insert 24
insert(&head, 24);
//insert 45
insert(&head, 45);
//insert 458
insert(&head, 458);
//insert 65
insert(&head, 65);
//insert 2
insert(&head, 2);
insert (&head , 85);

cout<<"list taversal "<<endl;
displaylist(head);

return 0;




}

