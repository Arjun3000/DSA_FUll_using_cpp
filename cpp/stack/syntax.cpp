#include<iostream>
using namespace std;

class stack {
public:
    int arr[1000];
    int top;

    stack() {
        top = -1;
    }

    void push(int val) {
        if (top == 999) {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "stack underflow" << endl;
            return;
        }
        top--;
    }

    bool isempty() {
        return top == -1;
    }

    int peek() {
        if (top == -1) {
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void print() {
        if (top == -1) {
            cout << "stack is empty" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    stack st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.print(); // prints the stack
    cout << "Top element: " << st.peek() << endl;
    st.pop();
    st.print();
    return 0;
}
