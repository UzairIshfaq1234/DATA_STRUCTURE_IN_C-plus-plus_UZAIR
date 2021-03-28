#include <iostream>
using namespace std;

int stack[100], size=100, level=-1;
void push(int val) {
if(level>=size-1)
cout<<"Stack is already filled"<<endl;
else {
level++;
stack[level]=val;
}
}
void pop() {
if(level<=-1)
cout<<"Stack already empty"<<endl;
else {
cout<<"The popped element is "<< stack[level] <<endl;
level--;
}
}
void display() {
if(level>=0) {
cout<<"Stack elements are:";
for(int i=level; i>=0; i--)
cout<<stack[i]<<" ";
cout<<endl;
} else
cout<<"Stack is empty";
}


int main() {
int ch, val;
cout<<"1) Push in stack"<<endl;
cout<<"2) Pop from stack"<<endl;
cout<<"3) Display stack"<<endl;
cout<<"4) Exit"<<endl;
do {
cout<<"Enter choice: "<<endl;
cin>>ch;
switch(ch) {
case 1: {
cout<<"Enter value to be pushed:"<<endl;
cin>>val;
push(val);
break;
}
case 2: {
pop();
break;
}
case 3: {
display();
break;
}
case 4: {
cout<<"Exit"<<endl;
break;
}
default: {
cout<<"Invalid Choice"<<endl;
}
}
}while(ch!=4);
return 0;
}

/*
Output
1) Push in stack
2) Pop from stack
3) Display stack
4) Exit
*/
/*
Enter choice: 1
Enter value to be pushed: 2
Enter choice: 1
Enter value to be pushed: 6
Enter choice: 1
Enter value to be pushed: 8
Enter choice: 1
Enter value to be pushed: 7
Enter choice: 2
The popped element is 7
Enter choice: 3
Stack elements are:8 6 2
Enter choice: 5
Invalid Choice
Enter choice: 4
Exit

*/


