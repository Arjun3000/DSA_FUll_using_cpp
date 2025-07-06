#include<iostream>
using namespace std;
class que{
    public:
    int arr[100];
    int front,rear;

    que()
    {
        front = 0;
        rear  = -1;

    }

};

void enque(int x)
{
    if(rear == 999)
    {
        cout<<"queue overflow";
        return;
    }
    arr[++rear] = x;
}
void dque()
{
    if(front>rear)
    {
        cout<<"queue underflow";
        return;
    }
    front++;
}
void isempty()
{
    if(front == -1 && rear == -1)
    {
        cout<<"que is empty\n";
    }
}
int main()
{

}