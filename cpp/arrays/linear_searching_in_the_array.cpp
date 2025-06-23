#include<iostream>
using namespace std;
int lsearch(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
   int n = 5,key;
   int arr[n];
   int i;

   cout<<"enter the array : \n";
   for(i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl<<"enter the element you want to search : "<<endl;
   cin>>key;
   if(lsearch(arr,n,key))
   {
     cout<<"key "<<key<<" is present in the array";
   }
   else
   {
     cout<<"element is not present";
   }
   return 0;

}