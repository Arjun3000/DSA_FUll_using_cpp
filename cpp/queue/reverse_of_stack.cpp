#include <queue>
#include <stack>
using namespace std;

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        stack<int> st;
        // Move all elements from queue to stack
        while (!q.empty()) {
            st.push(q.front());
            q.pop();
        }
        // Move all elements back from stack to queue
        queue<int> reversedQ;
        while (!st.empty()) {
            reversedQ.push(st.top());
            st.pop();
        }
        return reversedQ;
    }
};