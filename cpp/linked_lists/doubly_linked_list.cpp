#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;

    node (int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtEnd(node*&head,int val){
  node*n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    
    node*temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void print(node*head)
{
    node*temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
void delAtEnd(node*&head)
{
    if(head == NULL)
    {
        return;
    }
    if(head == NULL)
    {
        delete head;
        head = NULL;
        return;

    }
    node*temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}
int main()
{
  node*head = NULL;
  insertAtEnd(head,20);
  insertAtEnd(head,30);
  insertAtEnd(head,40);
  delAtEnd(head);
  print(head);
}