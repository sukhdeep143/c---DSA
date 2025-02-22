#include <iostream>
using namespace std;

#define MAX 5  // Define maximum size of stack

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; } // Constructor initializes stack

    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n"; // If stack is full
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    return 0;
}
