#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextgreat(vector<int> &arr)
{
    int n;
    vector<int>result(n,-1);
    stack<int>st;

    for(int i = n-1; i >= 0; i--)
    {
        while(!st.empty() && st.top()<=arr[i])
        {
            st.pop();
        }
        if(!st.empty())
        {
            result[i] = st.top();
            
        }
        st.push(arr[i]);
    }
    return result;
}
int main()
{
   vector<int>a = {4,5,2,10,8};
   vector<int> res = nextgreat(a);
   int i;
   for(i=0;i<5;i++) {
       cout << i << " ";
   }
   cout << endl;
}