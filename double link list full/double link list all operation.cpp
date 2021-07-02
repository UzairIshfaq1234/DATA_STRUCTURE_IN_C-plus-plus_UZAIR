#include<iostream>
using namespace std;
int count=0;
struct node
{
    int data;
  node *next;
node *prev;
  node(int value)
{
data = value;
}
}*nn,*temp; 
node* head;
node* tail;


void creatList(int data)
{
node* new_node = new node(data);
if(head==NULL)
{
    new_node->next =NULL;
    new_node->prev= NULL;
head =new_node;
tail=new_node;   
count++;
    }
}


void insertatfirst(int data)
{
node* new_node = new node(data);
if(head==NULL&&tail==NULL)
{
cout<<"create list first"<<endl;
}
else
{
new_node->next = head;
new_node->prev = NULL;
head->prev= new_node;
head =new_node;
count++;
    }
}
void insertatlast(int data)
{
node* new_node = new node(data);
if(head==NULL&&tail==NULL)
{
cout<<"create list first"<<endl;
}
else
{
new_node->next =NULL;
tail->next=new_node;
new_node->prev= tail;
tail = new_node;
count++;
    }
}
void intsertatposition(int data, int position)
{
int noofnode =1;
nn = new node(data);
temp= head;
node* temp2;
while(temp != NULL)
{
if(position-1==noofnode)
{
temp2=temp->next;
nn->next=temp2;
temp2->prev=nn;
temp->next=nn;
nn->prev=temp;
count++;
}
noofnode++;
temp = temp->next;
}

}
void deletefirst()
{
temp = head->next;
head=NULL;
head =temp;
head->prev=NULL;
}
deletelast()
{
temp=tail->prev;
tail=NULL;
tail=temp;
tail->next=NULL;
}
deletespecific(int position)
{
int no_ofnode=1;
node* temp2;
node* temp3;
temp = head;
while(temp!=NULL)
{
    if(position-1==no_ofnode)
    {
    temp2 = temp->next;
    temp3 = temp2->next;
    temp->next =NULL;
    temp->next = temp3; 
    temp3->prev=temp;
}
    no_ofnode++;
    temp= temp->next;
}
}
void searching(int value)
{
int count=0;
int index=1;
node* temp = head;
while(temp!= NULL)
{
if(temp->data == value)
   {
    count++;
    break;
   }
   temp= temp->next;
   index++;
}
if(count!=0)
   cout<<"Value found at position : "<<index<<endl;
else
    cout<<"Value not found"<<endl;
}
void greaterNumber(int value)
{
int count=0;
node* temp = head;
while(temp!= NULL)
{
if(temp->data > value)
   {
    count++;
   }
   temp= temp->next;
}
if(count!=0)
   cout<<"Elements greater than "<<value<<" are "<< count<<endl;
else
    cout<<"No element is greater!"<<endl;
}
display()
{
node* temp= head;
while(temp!= NULL)
{
cout<<temp->data;
temp = temp->next;
}
}
printindexvalue(int index)
{
int noofindex=0;
temp=head;
while(temp!=NULL)
{
if(index==noofindex)
{
cout<<"Value at "<<index<<" is "<<temp->data;
break;
}
noofindex++;

temp = temp->next;
}
}
main()
{
    int a,x;
cout<<"1:creat a list"<<endl;
cout<<"2:insert at start"<<endl;
cout<<"3:insert at end"<<endl;
cout<<"4:insert at specific position"<<endl;
cout<<"5:Delete first node"<<endl;
    cout<<"6:Delete at specific position"<<endl;
cout<<"7:Delete last Node"<<endl;
cout<<"8:Search a given value"<<endl;
cout<<"9:Count number greater than given number\n";
cout<<"10:Display list"<<endl;
cout<<"\t\t\t---------------------------------\n"<<endl;
while(true)
{
cout<<"Enter choice"<<endl;
cin>>a;
switch(a)
{
case 1:
{
cout<<"Enter the value"<<endl;
cin>>x;
creatList(x);
cout<<"List is "<<endl;
display();
cout<<"\n";
break;
}
case 2:
{
cout<<"Enter the value"<<endl;
cin>>x;
    insertatfirst(x);
cout<<"List is "<<endl;
display();
cout<<"\n";
break;
}
case 3:
{
cout<<"Enter the value"<<endl;
cin>>x;
insertatlast(x);
cout<<"List is "<<endl;
display();
cout<<"\n";
break;
}
case 4:
{
int pos;
cout<<"Enter the value"<<endl;
cin>>x;
cout<<"enter the position"<<endl;
cin>>pos;
intsertatposition(x,pos);
cout<<"List is "<<endl;
display();
cout<<"\n";
break;
}
case 5:
{
deletefirst();
cout<<"List is "<<endl;
      display();
      cout<<"\n";
break;
}
case 6:
{
int pos;
cout<<"enter the position"<<endl;
          cin>>pos;
deletespecific(pos);
cout<<"List is "<<endl;
        display();
        cout<<"\n";
          break;
}
case 7:
{
deletelast();
cout<<"List is "<<endl;
        display();
        cout<<"\n";
        break;
}

case 8:
{
int num;
cout<<"Enter the number"<<endl;
cin>>num;
searching(num);
break;
}
case 9:
{
int num;
cout<<"Enter the number"<<endl;
cin>>num;
    greaterNumber(num);
    break;
}
case 10:
{
cout<<"List is "<<endl;
        display();
        cout<<"\n";
break;
}

default:
cout<<"\a"; }
}
}
