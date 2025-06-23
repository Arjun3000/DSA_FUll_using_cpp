#include<iostream>
using namespace std;
int inssort(int arr[],int n)
{
   int i,j;
   int key;
   for(i=1;i<n;i++)
   {
    j=i-1;
    key = arr[i];

    while(j>=0 and arr[j]>key)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
   }
cout<<"sorted array is : ";
    for(i=0;i<n;i++)
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
    cout<<endl;

    inssort(arr,n);

}