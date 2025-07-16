class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> position;
        int i;
        int store = -1;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                position.push_back(i);
                break;
            }
        }
        if (position.size() == 0) {
            position.push_back(-1);
        }
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                store = i;
            }
        }
        if (store == -1) {
            position.push_back(-1);
        } else {
            position.push_back(store);
        }
        return position;
    }
};