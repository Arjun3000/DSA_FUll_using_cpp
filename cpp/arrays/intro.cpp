#include<iostream>
using namespace std;
int main()
{
    int i,s;
    cout<<"enter the size of the array : ";
    cin>>s;
    int arr[s];
    for(i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"your array is : ";

    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    int sum =0;
    for(i=0;i<s;i++)
    {
        sum = sum+arr[i];
    }
    cout<<endl<<sum<<endl;

    
}