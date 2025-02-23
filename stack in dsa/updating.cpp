#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) {
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    while (!temp.empty()) {
        cout << temp.top() << " ";
        s.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    
    // Pushing elements
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Original Stack: ";
    printStack(s);
    
    // Updating top element
    int topElement = s.top(); 
    s.pop(); // Remove top element
    topElement = 50; // Modify it
    s
