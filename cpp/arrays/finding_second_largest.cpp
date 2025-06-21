#include<iostream>
using namespace std;
int large(int arr[],int n)
{
    int i = 0;
    int max;
    max = arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int sec(int arr[],int n)
{
    int lar = large(arr,n);
    int secl = arr[0];

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=lar&&(arr[i]<lar && arr[i]>secl))
        {
            secl = arr[i];
        }
    }
    if(secl==lar)
    {
        return -1;
    }
    else
    {
       return secl;
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
    int secmax = sec(arr,n);
    if(secmax==-1)
    {
        cout<<"all the elements in the array is same";
    }
    else
    {
      cout<<"second maximum value of array is : "<<secmax<<endl;
    }
    
}