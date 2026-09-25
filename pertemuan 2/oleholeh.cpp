#include <iostream>
using namespace std;

struct node {
    float value;
    node *next;
};

node *head = NULL; 
node *tail = NULL; 

void enqueue(float n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
        tail = head;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    cout << n << " di-enqueue ke Queue\n";
}

void dequeue() {
    if (head == NULL) {
        cout << "Queue kosong!\n";
        return;
    }
    
    node *temp = head;
    head = head->next;
    
    if (head == NULL) {
        tail = NULL;
    }
    
    cout << temp->value << " di-dequeue dari Queue\n";
    delete temp;
}

void displayQueue() {
    node *temp = head;
    cout << "Isi Queue (Front -> Rear): ";
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    system("cls");
    cout << "QUEUE" << endl;
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    displayQueue();
    
    dequeue();
    displayQueue();
    
    return 0;
}