#include<iostream>
using namespace std;
int zero(int arr[],int n)
{
    int z = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            z = z+1;
        }
    }
    return z;
}
int main()
{
    int n=5,i;
    int arr[n];
    cout<<"enter the element of the array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"total zeroes in the given array is : "<<zero(arr,n)<<endl;
}