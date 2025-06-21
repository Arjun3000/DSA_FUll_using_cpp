//printing the keys of a map 
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string>map1;
    map1[1] ="student 1";
    map1[2] = "student 2";
    map1[3] = "student 3";
    map1[4] = "student 4";

    int i;
    for(i=1;i<=map1.size();i++)
    {
        cout<<"at key " <<i<<" id is "<<map1[i]<<endl;
    }
}