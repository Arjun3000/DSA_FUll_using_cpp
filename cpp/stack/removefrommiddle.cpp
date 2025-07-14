#include <stack>
using namespace std;

class Solution {
  public:
  void solve(stack<int>& s, int curr, int mid)
  {
    if(s.empty()) return;

    int tope = s.top();
    s.pop();
    if(curr == mid) return;
    solve(s, curr + 1, mid);
    if(curr != mid) s.push(tope);
  }
  void deleteMid(stack<int>& s) {
      int size = s.size();
      int mid = (size % 2 == 0) ? (size / 2) : (size / 2 + 1);
      solve(s, 1, mid);
  }
};