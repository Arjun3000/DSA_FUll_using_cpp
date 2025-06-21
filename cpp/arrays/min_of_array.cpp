#include<iostream>
using namespace std;
int small(int arr[],int n)
{
    int i;
    int min = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;

}
int main()
{
   int n=5,i;

   int arr[n];
   cout<<"enter element of the array : "<<endl;

   for(i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"element of the array is : "<<endl;
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   int min;
   min = small(arr,n);
   cout<<endl<<"smallest element of the array is : "<<min<<endl;
}