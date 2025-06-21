#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number which is palindrome : ";
    cin>>num;

    int original = num;

    int rev = 0,digit;

    while(num>0)
    {
        //last digit
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }

    if(original==rev)
    {
        cout<<"number is plaindrome";
    }
    else
    {
       cout<<"not a plaindorme";
    }
    return 0;
}