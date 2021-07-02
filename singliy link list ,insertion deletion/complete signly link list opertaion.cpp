#include <iostream>
using namespace std;
int count = 0;

struct node
{
    int data;
    node *next;
} * head, *tail, *nn, *temp;

//create  new node
void create_list(int a)
{
    if (head == NULL)
    {
        nn = new node;
        nn->data = a;
        nn->next = NULL;
        head = nn;
        tail = nn;

        count = count + 1;
    }
    else
    {
        cout << "list already created";
    }
}

// insertion at the beginnig
void insert_at_first(int a)
{
    if (head == NULL)
    {
        cout << "create the list first";
    }
    else
    {
        nn = new node;
        nn->data = a;
        nn->next = head;
        head = nn;
        count = count + 1;
    }
}

//insert at the last
void insert_at_last(int a)
{
    if (head == NULL)
    {
        cout << "create the list" << endl;
    }
    else
    {
        nn = new node;
        nn->data = a;
        nn->next = NULL;
        tail->next = nn;
        tail = nn;
        count = count + 1;
    }
}

//insert at the specfic location
void insert_at_specfic_pos(int pos, int a)
{
    if (head == NULL)
    {
        cout << "create the list first" << endl;
    }
    else
    {
        int first = 1;
        temp = head;
        while (temp != NULL)
        {
            if (pos - 1 == first)
            {
                nn = new node;
                nn->data = a;
                nn->next = temp->next;
                temp->next = nn;
            }
            first++;
            temp = temp->next;
        }
        count = count + 1;
    }
}
//display
void display()
{
    temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
}

// DELETION
//DELETE THE FIRST NODE

void delete_at_first()
{
    temp = head->next;
    head = NULL;
    head = temp;
    count = count - 1;
}

void delete_at_last()
{
    temp = head;
    while (temp != NULL)
    {
        if (temp->next == tail)
        {
            temp->next = NULL;
            tail = temp;
        }
        temp = temp->next;
    }
    count = count--;
}

void delete_at_specfic_pos(int pos)
{
    int first = 1;
    node *temp2;
    node *temp3;
    temp = head;
    while (temp != NULL)
    {
        if (pos == first)
        {
            temp2 = temp->next;
            temp3 = temp2->next;
            temp->next = temp3;
        }
        first++;
        temp = temp->next;
    }
    count--;
}

void searching(int no)
{
    int count = 0;
    int first = 1;
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == no)
        {
            count++;
            break;
        }
        temp = temp->next;
        first++;
    }
    if (count != 0)
    {
        cout << "value found at the position " << first << endl;
    }
    else
    {
        cout << "value not found" << endl;
    }
}

main()
{

    while (true)
    {
        int choice;
        int position;
        int data;

        cout << "1:creat a list" << endl;
        cout << "2:insert at start" << endl;
        cout << "3:insert at end" << endl;
        cout << "4:insert at specific position" << endl;
        cout << "5:Delete first node" << endl;
        cout << "6:Delete at specific position" << endl;
        cout << "7:Delete last Node" << endl;
        cout << "8:Search a given value" << endl;
        cout << "9:Count number greater than given number\n";
        cout << "10:Display list" << endl;
        cout << "11:Exit" << endl;
        cout << "\t\t\t---------------------------------\n"
             << endl;

        cout << "Enter choice" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter the data" << endl;
            cin >> data;

            create_list(data);
            cout << "The list has been created" << endl;
            cout << "-------------------------" << endl;
            break;

        case 2:
            cout << "Enter the data" << endl;
            cin >> data;

            insert_at_first(data);
            cout << "The data has been inserted at start" << endl;
            cout << "-------------------------" << endl;
            break;

        case 3:
            cout << "Enter the data" << endl;
            cin >> data;

            insert_at_last(data);
            cout << "The data has been inserted at last" << endl;
            cout << "-------------------------" << endl;
            break;

        case 4:
            cout << "Enter the data" << endl;
            cin >> data;

            cout << "Enter the position:" << endl;
            cin >> position;

            insert_at_specfic_pos(position, data);
            cout << "The data has been inserted at specific position" << endl;
            cout << "-------------------------" << endl;
            break;

        case 5:
            delete_at_first();
            cout << "The data has deleted at start" << endl;
            cout << "-------------------------" << endl;
            break;

        case 6:
            cout << "Enter the position:" << endl;
            cin >> position;

            delete_at_specfic_pos(position);
            cout << "The data has deleted at specific position" << endl;
            cout << "-------------------------" << endl;
            break;

        case 7:

            delete_at_last();
            cout << "The data has deleted last" << endl;
            cout << "-------------------------" << endl;
            break;

        case 8:

            cout << "Enter the value to search" << endl;
            cin >> data;

            searching(data);
            cout << "-------------------------" << endl;
            break;

        case 9:
            cout << "-------------------------" << endl;
            break;

        case 10:
            display();
            cout << "-------------------------" << endl;
            break;

        case 11:
            cout << "Exiting" << endl;
            exit(3);

        default:
            cout << "Please enter a valid choice" << endl;
            break;
        }
    }
}
