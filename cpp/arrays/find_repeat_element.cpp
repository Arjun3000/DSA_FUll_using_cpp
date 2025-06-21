//repeated element in the array
#include<iostream>
using namespace std;
int repeat(int arr[],int n)
{
    int i,j;
    int repeat;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
             return arr[i];
           }
        }
    }
    return -1;
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
    int res = repeat(arr,n);
    if(res==-1)
    {
        cout<<"no repeated element";
    }
    else
    {
    cout<<"repeated element in array is : "<<repeat(arr,n)<<endl;
    }

}   