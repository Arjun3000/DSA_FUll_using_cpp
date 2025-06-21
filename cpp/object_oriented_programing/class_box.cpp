//create a box class
//define the data members - length, width, height
//define member function - calculate Area, calculatevolume
//create objects box1 and box2 
//calculate and print area and volume for both boxes
#include<iostream>
using namespace std;
class box
{
   public:
   int len;
   int wid;
   int hi;

   int area()
   {
      return len*wid;
   }
   int volume()
   {
     return len*wid*hi;
   }
};
int main()
{
  box b1;
  int i,j,k,l;
  cout<<"enter the lenght width and height of the box : ";
  cin>>i>>j>>k;
  b1.len = 2;
  b1.wid = 3;
  b1.hi = 4;
  
  cout<<"area of the given box is : "<<b1.area()<<endl;
  cout<<"volume of the given boc is : "<<b1.volume()<<endl;
}