#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
   map<int, string> m1;
   m1[1] = "person1";
   m1[2] = "person2";

   cout<<m1[1]<<endl;
   cout<<m1.size()<<endl;
}