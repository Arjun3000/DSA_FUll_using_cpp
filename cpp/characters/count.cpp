#include<iostream>
using namespace std;

int main()
{
    char text[100];
    cout<<"enter the text : ";
    cin.getline(text,100);
    int l=0;
    while(text[l]!='\0')
    {
        l = l+1;
    }
    cout<<l;
}