class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        int i=1;
        while(i<n){
            if(nums[i-1]==nums[i]){
                ans++;
            }else
            nums[i-ans] = nums[i];
            i++;
        }
        return n-ans;
    }
};