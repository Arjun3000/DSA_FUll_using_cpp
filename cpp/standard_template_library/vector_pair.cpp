#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3};
    v.push_back(4);
    for(auto i : v)
    {
        cout<< i <<" ";
    }
    cout<<endl;
    
    ///////////////////////////////

    pair<int,string>p = {1,"arjun"};

    cout<<p.first<<" : "<<p.second<<endl;

    ////////////////////////

    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4},{4,5}};
    for(auto i : vp)
    {
        cout<<i.first<<","<<i.second<<endl;
    }
}