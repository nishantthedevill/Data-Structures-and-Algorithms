class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(nums[nums[i]]);
        }
        return arr;
    }
};