#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid = (s+e)/2;
  
    while(s<=e)
    {
        if(key == arr[mid])
        {
            return arr[mid];
        }

        else if(arr[mid]>key)
        {
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
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

    cout<<binarysearch(arr,n,key)<<" is present in the array"<<endl;
}