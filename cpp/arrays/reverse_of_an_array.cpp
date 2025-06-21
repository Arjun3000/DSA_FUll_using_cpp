#include<iostream>
using namespace std;
int rev(int arr[],int n)
{
    int i;
    
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
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
    cout<<endl<<"reverse of the array is : "2;
    rev(arr,n);
}

