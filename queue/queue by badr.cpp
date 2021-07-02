#include <iostream>

using namespace std;

int front = -1;
int rear = -1;

const int QUEUE_SIZE = 4;
int queue[QUEUE_SIZE];

void enqueue(int data) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[front] = data;
    } else
	{  // if (rear == ((rear + 1) % QUEUE_SIZE)) {
        rear = (rear + 1) % QUEUE_SIZE;
        queue[rear] = data;
    }
}

void dequeue() {
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % QUEUE_SIZE;
    }
}

void view() {
    if (rear >= front) {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
    } else {
        for (int i = front; i < QUEUE_SIZE; i++) {
            cout << queue[i] << " ";
        }
 
        for (int i = 0; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }
}

main() {
    int input;
    while (true) {
        cout << "Enter choice: ";
        cin >> input;

        switch (input) {
            case 1:
                cout << "Enter data: ";
                cin >> input;
                enqueue(input);
                break;
                
            case 2:
                cout << "Dequeuing.." << endl;
                dequeue();
                break;

            case 3:
                cout << "Viewing..." << endl;
                view();
                break;

            default:
                break;
        }

    }
}
