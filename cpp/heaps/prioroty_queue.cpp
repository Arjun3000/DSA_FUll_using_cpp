#include<queue>
#include<vector>
#include<iostream> 
using namespace std;
int main()
{
    // Declare a min-priority queue of integers
    priority_queue<int,vector<int>,greater<int>> min_pq;
    // Add elements
    min_pq.push(10);
    min_pq.push(5);
    min_pq.push(20);
    // Access the minimum element
    cout<< min_pq.top(); // min_value will be 5
    

}