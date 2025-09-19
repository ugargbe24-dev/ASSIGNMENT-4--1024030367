#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1 || front > rear);
}

bool isFull() {
    return (rear == SIZE - 1);
}

void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is Full!\n";
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = x;
    cout << x << " inserted into queue\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << queue[front] << " removed from queue\n";
    front++;
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is Empty!\n";
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    c

