#include<iostream>
using namespace std;
int issort(int arr[], int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
       if(arr[i]>arr[i-1])
       {
         return 1;
       }
       else
       {
         return -1;
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
    int sort = issort(arr,n);
    if (sort == 1)
    {
        cout<<"sort";
    }
    else
    {
        cout<<"not sorted";
    }
}