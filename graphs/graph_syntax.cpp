#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addedge(int u,int v,bool d)
    {
       adj[u].push_back(v);
       if(d == 0)
       {
            adj[v].push_back(u);
       }
    }

    void print()
    {
        for(auto i : adj)
        {
            cout<<i.first<<" -> ";

            for(auto j : i.second)
            {
                cout<<j<<",";
            }cout<<endl;
        }
    }

};
int main()
{
    int n,m;
    cout<<"enter the number of nodes : ";
    cin>>n;
    cout<<"enter the edges : ";
    cin>>m;

    int i;
    graph g1;
    for(i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g1.addedge(u,v,0);
    }
    g1.print();
   
   
}