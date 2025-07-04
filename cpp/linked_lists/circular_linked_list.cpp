#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtEnd(node*&head, int val)
{
    node*n = new node(val);

    if(head==NULL)
    {
        n->next = n;
        head = n;
        return;
    }
  

    node*temp  = head;

    while(temp->next!=head)
    {
        temp = temp->next;
    }
    n->next = head;
    temp->next = n;
}
void insertAtBegin(node*head,int val)
{
    node*n = new node(val);
    if(head==NULL)
    {
        
        n->next=head;
        head = n;
        return;
    }
    node*temp= head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;

}

void insertATPOS(node*&head,int val,int pos)
{
    node*n = new node(val);
    node*temp = head;

    int i;
    for(i=1;i<pos;i++)
    {
       temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
/*void delATStart(node*&head){
if(head==NULL)
{
    return;
}
if(head->next == head)
{
    delete head;
    head = NULL;
    return;
}
node*temp = head;
while (temp->next!=head)
{
    temp = temp->next;
}
node*n = head;
temp->next = head->next;
head = head->next;
delete head;
}*/
void print(node* head)
{
    if (head == NULL)
        return;
    node* temp = head;
    do
    {
       cout << temp->data << " -> ";
       temp = temp->next;
    } 
    while (temp != head);
    cout <<head->data<<"(head)\n";
}


int main()
{
   node*head = NULL;
   insertAtEnd(head,20);
   insertAtEnd(head,30);
   insertAtEnd(head,40);
   insertAtEnd(head,50);
   insertAtBegin(head,10);
   insertATPOS(head,25,2);
   //delATStart(head);
   print(head);
}