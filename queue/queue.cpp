#include <iostream>
using namespace std;

int front = -1;  
int rear = -1;

const int SIZE = 4; // total size of queue

int queue[SIZE];

bool isEmpty() {
    return front == - 1 && rear == -1;
}

void displayQueue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    }

    cout << "Data containg in the queue: " << endl;
    if (rear >= front) {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
    } else {
        for (int i = front; i < SIZE; i++) {
            cout << queue[i] << " ";
        }
 
        for (int i = 0; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }
}

void enqueue(int data) {
    if (isEmpty()) {
        front = rear = 0;
        queue[rear] = data;
    } else if ((rear + 1) % SIZE == front) {
        cout << "Dear programmer Queue is full!" << endl;
    } else {
        rear = (rear + 1) % SIZE;
        queue[rear] = data;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Underflow" << endl;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

main() {
    enqueue(2);
    enqueue(9);
    enqueue(8);
    enqueue(6);
    dequeue(); // the queue will dequeue 2 according to FIFO
    enqueue(-8);
    dequeue(); // the queue will dequeue 9 here
    enqueue(4);
    enqueue(10); // the queue will be full here because it exceeds the maximum size

    displayQueue(); // 8, 6, -8, 4
}
