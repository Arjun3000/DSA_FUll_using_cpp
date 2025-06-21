#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>a;

   int n,i;
   cout<<"enter the number of elements : ";
   cin>>n;
   for(i=0;i<n;i++)
   {
     a.push_back(i);
     cout<<a.at(i)<<endl;
   }
   int j;
   for(i=0;i<n;i++)
   {
    for(j=n;j>=i;j--)
    {
        cout<<a.at(j)<<endl;
    }
   }
}