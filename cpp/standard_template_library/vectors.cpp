/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v1;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(21);
  v1.push_back(22);
  v1.push_back(24);
  
  int i;
  for(i=0;i<v1.size();i++)
  {
    cout<<v1.at(i)<<endl;
  }
 cout<<endl;
  //enhance for loop

  for(int i:v1)
  {
     cout<<i<<endl;
  }
  cout<<endl;

  for(i=0;i<v1.size();i++)
  {
    if(i/2!=0)
    {
      v1.erase(v1.[i]);
    }
  }

  for(int i:v1)
  {
     cout<<i<<endl;
  }

}*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{

  int n,i,j,k;
  cout<<"enter the number of elements you want in the vector : ";
  cin>>n;

  vector<int>v1(n);

  for(i=0;i<n;i++)
  {
    cin>>v1[i];
  }

  cout<<"you entered : ";
  for(i=0;i<n;i++)
  {
    cout<<v1[i]<<" ";
  }


//sum of all

k = 0;
for(i=0;i<n;i++)
{
  k = v1[i]+k;
}
cout<<endl;
cout<<k<<endl;

//reverse of the vector

  for(j=n-1;j>=0;j--)
  {
    cout<<v1[j]<<" ";
  }

//max and min
int o;
cout<<endl<<"enter the number : ";
cin>>o;
vector<int>v2(o);

for(i=0;i<o;i++)
{
  cin>>v2[i];
}

cout<<endl<<"you entered : ";
for(i=0;i<o;i++)
{
  cout<<v2[i]<<" ";
}
int max = v2[0];
int min = v2[0];

for(i=0;i<o;i++)
{
  if(v2[i]>max){
  max = v2[i];
  }
}
cout<<endl<<max;
}