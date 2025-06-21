#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value : ";
    cin>>a;

    int &ref = a;
    cout<<"the given value is : "<<a<<endl;

    cout<<"the location of the vlaue is : "<<&a<<endl;

    //pointer
    int b;
    cout<<"enter the value 2 : ";
    cin>>b;
    int *ptr1 = &a;
    int *ptr = &b;
    int **ptr2 = &ptr;

    cout<<"the pointer address of the value is : "<<ptr<<endl;

    cout<<"the value where pointer is addressing is : "<<*ptr<<endl;


    cout<<"the product of the values is : "<<*ptr**ptr1<<endl;
    cout<<"address of the first pointer : "<< ptr2;
    
}