#include <stack>
using namespace std;

class Solution {
  public:

  void solve(stack<int>& st, int x)
  {
      if(st.empty())
      {
          st.push(x);
          return;
      }
      int tope = st.top();
      st.pop();
      solve(st, x);
      st.push(tope);
  }

  stack<int> insertAtBottom(stack<int> st, int x) {
      solve(st, x);
      return st;
  }
};