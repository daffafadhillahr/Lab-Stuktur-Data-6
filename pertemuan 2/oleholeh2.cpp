#include <iostream>
using namespace std;

struct node {
    float value;
    node *next;
};

node *head = NULL; 
node *tail = NULL; 
node *top = NULL;

void push(float n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = top;
    top = newNode;
    cout << n << " di-push ke Stack\n";
}

void pop() {
    if (top == NULL) {
        cout << "Stack kosong!\n";
        return;
    }

    node *temp = top;
    top = top->next;
    cout << temp->value << " di-pop dari Stack\n";
    delete temp;
}

void displayStack() {
    node *temp = top;
    cout << "Isi Stack (Top -> Bottom): ";
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    system("cls");

    cout << "STACK" << endl;
    push(10);
    push(20);
    push(30);
    displayStack();

    pop();
    displayStack();
    
    return 0;
}