#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{
    int i,j;
    int count = 0;
    for(i=0;i<n-1;i++)
    {
        bool swapp = false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
               swapp = true;
               count = count+1;
            }
        }
        if(swapp==false)
        {
            break;
        }
    }
    cout<<"sorted array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the algorithm worked for : "<<count<<" times"<<endl;
    
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