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
};
void push(int val)
{
    if (top==999)
    {
        cout<<"stack overflow";
        return;
    }
    top++;
    arr[top] = val;
}
void pop()
{
    if(top=-1)
    {
        cout<<"stack underflow";
        return;
    }
    top--;
}
bool isempty()
{
    if(top==-1)
    {
        cout<<"stack is empty";
        return;
    }
}
void peek()
{
    if(top==-1)
    {
        return -1;
    }
    return top;
}

int main()
{
  stack st;
  push(100);
  peek();
}
