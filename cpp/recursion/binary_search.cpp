#include<iostream>
using namespace std;
int binarysearch(int arr[],int start, int end, int key)
{
    if(start>=end) return false;

    int mid = start+(end-start)/2;

    if(key==arr[mid]) return true;

    if(key>arr[mid]) 
    {
      return (arr,mid+1,end,key);
    }
    else
    {
      return(arr,start,mid-1,key);
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
    int s = 0;
    int e = n-1;
    if(binarysearch(arr,s,e,key))
    {
        cout<<"key is present";
    }
    else
    {
        cout<<"key is not present";

    }
}