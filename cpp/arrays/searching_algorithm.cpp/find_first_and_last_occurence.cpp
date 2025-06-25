#include<iostream>
using namespace std;
int firstandlast(int arr[],int n,int key)
{
    int i;
    int store,last;
    int mid;

    int start = 0;
    int end = n-1;
    mid = (start+end)/2;
    
    while(start<=end)
    {
        if(key==arr[mid])
        {
            store = mid;
            end = mid - 1;
        }
        else if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }

    cout<<"first occurence of key "<<key<<" is : "<<store<<endl;
    start = 0;
    end = n-1;
    mid = (start+end)/2;

     while(start<=end)
    {
        if(key==arr[mid])
        {
            last = mid;
            start = mid + 1;
        }
        else if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    cout<<"last occurence of key "<<key<<" is : "<<last<<endl;
    int total = (last-store)+1;
    cout<<"total occurences of key "<<key<<" is : "<<total<<endl;
}
int main()
{
     int i,n=9;
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

    firstandlast(arr,n,key);
}