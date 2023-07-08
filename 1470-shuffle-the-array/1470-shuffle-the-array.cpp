class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
        vector<int> arr;
        while (i<n && j<nums.size()){
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
            i++;
            j++;
        }
        return arr;
    }
};