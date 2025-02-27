#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    cout << "Stack before deletion (top to bottom): " << endl;
    
    // Copy stack to display its elements
    stack<int> tempStack = myStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Deleting the top element (last inserted element)
    if (!myStack.empty()) {
        cout << "Deleting top element: " << myStack.top() << endl;
        myStack.pop();
    }

    cout << "Stack after deletion (top to bottom): " << endl;
    tempStack = myStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    return 0;
}
