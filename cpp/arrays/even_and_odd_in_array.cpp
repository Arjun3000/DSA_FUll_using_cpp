#include<iostream>
using namespace std;
int findeven(int arr[],int n)
{
    int even = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even =even+1;
        }
        
    }
    return even;
}
int findodd(int arr[],int n)
{
    int odd = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            odd =odd+1;
        }
        
    }
    return odd;
}
int main()
{
    int n=5,even,odd;
    int arr[n];
    int i;
    cout<<"enter elements in the array : "<<endl;
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"your array is : ";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"even elements in the array is : "<<findeven(arr,n)<<endl;
    cout<<"odd elements in the array is : "<<findodd(arr,n)<<endl;
}