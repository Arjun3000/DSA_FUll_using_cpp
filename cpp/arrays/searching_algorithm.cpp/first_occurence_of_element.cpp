#include<iostream>
using namespace std;
int firstsearch(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid = (s+e)/2;
    int store;
    while(s<=e)
    {
       if(key==arr[mid])
       { 
          store = mid;
       }
       if(key>arr[mid])
       {
         s = mid+1;
       }
       else
       {
         e = mid - 1;
       }
       mid = (s+e)/2;
    
    }
    return store;
}//time complexity is log n
int main()
{
     int i,n=8;
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

    cout<<"first occurence is present on the index : "<<firstsearch(arr,n,key)<<endl;
}