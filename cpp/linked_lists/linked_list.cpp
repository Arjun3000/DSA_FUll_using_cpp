#include<iostream>
using namespace std;
class node{
public:
int data;   //we need to initialize the data which we want to put in the linkedlist
node *next; //then we have to initialize one pointer where the pointer will point towards the next node

node(int value)  //make a constructor which automatically calls itself when object is created
   {
    data = value;
    next = NULL;
   }

};
void insertAtEnd(node*&head, int val)
{
   node*n = new node(val);//making the node in heap memory

   if(head == NULL)
   {
       head = n;
       return;
   }

   node *temp = head;//create the another pointer to make the link

   while(temp->next != NULL)//iterate until it reaches at null
   {
      temp = temp->next;
   }
   temp->next = n;//once reach point that to the next new node
}

void print(node* head)//pass by the value
{
   node *temp = head;
   while(temp->next!= NULL)
   {
      cout<<temp->data;
      temp = temp->next;
   }
}
int main()
{
   //node a* = new node(10);
   node *head = NULL;//intialize the head node as null
}

