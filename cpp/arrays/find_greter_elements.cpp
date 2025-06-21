#include<iostream>
using namespace std;
int great(int arr[],int n,int k)
{
    int i;
    int count = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            count++;
        }
    }
    return count;
    
}
int main()
{
    int i,n=5;
    int k;
    
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
    cout<<"enter the element you want to see if it is greater than the elements of the array : ";
    cin>>k;

    cout<<"no of elements who are greater than the the element k is : "<<great(arr,n,k);

    
}

