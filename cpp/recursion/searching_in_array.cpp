#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{
    if(n==0) return false;

    if(arr[0]==key)
    {
        return true;
    }
    else
    {
      return search(arr+1,n-1,key);
    }
    
}

int main()
{

    int i,n=5;
    int arr[n];
    cout<<"enter elements in array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the key : ";
    cin>>key;
    if(search(arr,n,key))
    {
        cout<<"key is present";
    }
    else
    {
        cout<<"key is not present";

    }
}