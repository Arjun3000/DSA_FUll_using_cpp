#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int p = arr[0];
    int i;
    int count = 0;
    for(i=s+1;i<=e;i++)
    {
        if(arr[i]<= p)
        {
            count++;
        }
    }
    int pi = s+count;
    swap(arr[pi],arr[s]);

    int i = s;
    int j = e;
    while(i<pi&&j>pi)
    {
         while(arr[i]<arr[pi])
         {
            i++;
         }
         while(arr[j]<arr[pi])
         {
            j--;
         }
         swap(arr[i++],arr[j--]);
    }
}
void quick(int arr[],int s,int e)
{
   int p = partition(arr,s,e);
   quick(arr,s,p-1);
   quick(arr,p+1,s);
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

    quick(arr,0,n-1);
}