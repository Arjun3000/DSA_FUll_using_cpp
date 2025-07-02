class Solution {
public:
    int removeDuplicates(vector<int>& nums){

        int i=0,j;
        for(j=1;j<nums.size();)
        {
                if(nums[i]!=nums[j])
                {
                    i++;
                    nums[i] = nums[j];
                }
                else
                {
                    j++;
                }
        }
        return i+1;
        
    }
};