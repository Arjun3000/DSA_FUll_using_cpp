//functions
#include<iostream>
using namespace std;
int mul(int &a,int &b)
{
  cout<<"product of the two numbers is : "<<a*b<<endl;
}
int main()
{
  int a,b;
  cout<<"enter a and b : ";
  cin>>a>>b;

  mul(a,b);
  cout<<a*b;
}