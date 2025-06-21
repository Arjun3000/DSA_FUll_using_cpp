/*#include<iostream>
using namespace std;
int seclar(int arr[],int n)
{
    int i;
    int sec = 0;
    int max = arr[0];


    for(i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
          sec = arr[i];
       }
       

}
return sec;
}
int main()
{
   int n;
   cin>>n;
   int i;
   int arr[n];
   for(i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int large = seclar(arr,n);
   cout<<"largest element is : "<<large;
}
*/
#include<iostream>
using namespace std;
int findeven(int arr[],int n)
{
    int even = 0;
    int i;
    int odd = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even =even+1;
        }
        else
        {
          odd = odd+1;
        }
        
    }
    cout<<"even elements are : "<<even<<" odd elements are : "<<odd;
}

int main()
{
    int n=5,even,odd;
    int arr[n];
    int i;
    cout<<"enter elements in the array : "<<endl;
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"your array is : ";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    int oe = findeven(arr,n);
}