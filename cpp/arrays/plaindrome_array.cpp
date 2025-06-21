#include<iostream>
using namespace std;
int isplaindrome(int arr[],int n)
{
    int start = arr[0],end = arr[n-1];

    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
            return false;
        }
        else
        {
            return true;
        }
        start++;
        end--;
    }
}

int main()
{
   int n = 5;
   int arr[n];
   int i;

   cout<<"enter the values in the array : ";
   for(i=0;i<n;i++)
   {
     cin>>arr[i];
   }
cout << endl << "your array is : \n";
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   if(isplaindrome(arr,n))
   {
    cout<<"the array is plaindrome";
   }
   else
   {
    cout<<"it is not a plaindrome";
   }
   return 0;
}