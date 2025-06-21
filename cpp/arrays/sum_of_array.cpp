#include<iostream>
using namespace std;
int sumofarray(int arr[],int n)
{
    int sum = 0;
    int i;
    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}
int avg(int arr[],int n)
{
    int sum = sumofarray(arr,n);
    int avge = sum/n;
    return avge;
}
int main()
{
   int n = 5;
   int arr[n];

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   int sum = sumofarray(arr,5);
   cout<<"sum of the array is : "<<sum<<endl;
   int avgerage = avg(arr,5);
   cout<<"average of the array is : "<<avgerage<<endl;
}