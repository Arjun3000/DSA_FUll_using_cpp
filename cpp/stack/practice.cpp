#include<iostream>
using namespace std;
class stack{
    public:
    int arr[1000];
    int top;

    stack()
    {
        top = -1;
    }
void push(int val)
{
    if(top == 999)
    {
       cout<<"stack overflow";
    }
    
    arr[++top] = val;
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

int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.print();
}