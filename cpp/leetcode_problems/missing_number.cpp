class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum = 0;
        int n = nums.size();
        int total = n*(n+1)/2;
        for(int i:nums)
        {
           
           sum = sum + i;
        }
        int missing = total - sum;
        return missing;
    }

};