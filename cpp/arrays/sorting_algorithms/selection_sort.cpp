#include<iostream>
using namespace std;
int selsort(int arr[],int n)
{
   int i,j;
   
   for(i=0;i<n-1;i++)
   {
    int min = i;
      for(j = i+1;j<n;j++)
      {
         if(arr[min]>arr[j])
         {
            min = j;
         }
      }
    swap(arr[min],arr[i]);
   }

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

    selsort(arr,n);

}