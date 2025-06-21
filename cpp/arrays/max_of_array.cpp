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
    int max = large(arr,n);
    cout<<"maximum value of array is : "<<max<<endl;
}


