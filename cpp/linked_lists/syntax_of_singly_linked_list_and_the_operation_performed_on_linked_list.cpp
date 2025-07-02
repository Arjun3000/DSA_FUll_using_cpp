#include<iostream>
using namespace std;
class node
{
public:
int data;   //we need to initialize the data which we want to put in the linkedlist
node *next; //then we have to initialize one pointer where the pointer will point towards the next node

node(int value)  //make a constructor which automatically calls itself when object is created
   {
    data = value;
    next = NULL;
   }
};
//inserting at start
void insetAtStart(node*&head, int val)
{
   node*n = new node(val);
   n->next = head;
   head = n;
}
//inserting at end
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
//inserting at any position
void insert(node*&head, int val,int p)
{
   if(p==0)
   {
   insetAtStart(head,val);
   return;
   }
  node*n = new node(val);
  node* temp = head;
  for(int i=0;i<p-1;i++)
  {
    temp = temp->next;
  }
  n->next = temp->next;
  temp->next = n;
}
//deleting at end
void delAtEnd(node*&head)
{
   node*temp = head;

   if(head==NULL)
   {
      return;
   }
   if(head->next==NULL)
   {
       delete head;
       head = NULL;
       return;
   }

   while(temp->next->next!= NULL)
   {
      temp = temp->next;
   }
   delete temp->next;
   temp->next = NULL;

}
//deleting at start
void delAtStart(node*&head)
{
   if(head==NULL)
   {
      return;
   }
   if(head->next==NULL)
   {
      delete head;
      head = NULL;
      return;
   }

   node* temp = head;
   node* newtemp = head;

   temp = temp->next;
   head = temp;
   delete newtemp;
}
//deleting at given positon
void del(node*&head,int p)
{
   if(p==0)
   {
      delAtStart(head);
      return;
   }
   int i;
   node*temp = head;
   for(i=0;i<p-1;i++)
   {
      temp = temp->next;
   }
   node*del = temp->next;

   temp->next = temp->next->next;
   delete del;
}
//printing the linked list
void print(node* head)//pass by the value
{
   node *temp = head;
   while(temp!= NULL)
   {
      cout<<temp->data<<" -> ";
      temp = temp->next;
   }
   cout<<"NULL\n";
}
// searching 
bool search(node*&head ,int key)
{
   node*temp = head;
   while(temp->next!=NULL)
   {
      if(temp->data==key)
      {
         return true;
      }
      else
      {
         temp = temp->next;
      }
   }
   return false;
}
void update(node*&head ,int key,int up)
{
   node*temp = head;
   while(temp->next!=NULL)
   {
      if(temp->data==key)
      {
         temp->data = up;
      }
      else
      {
         temp = temp->next;
      }
   }
}
int main()
{
   //node a* = new node(10);
   node *head = NULL;//intialize the head node as null
   insertAtEnd(head,10);
   insertAtEnd(head,20);
   insertAtEnd(head,30);
   insertAtEnd(head,40);
   /*insetAtStart(head,90);
   insert(head,34,2);
   delAtEnd(head);
   delAtStart(head);
   del(head,2);*/
   print(head);
   cout<<search(head,31)<<endl;
   update(head,20,80);
   print(head);
}

