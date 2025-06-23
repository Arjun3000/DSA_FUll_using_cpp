#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"sorted array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
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

    bubblesort(arr,n);

}