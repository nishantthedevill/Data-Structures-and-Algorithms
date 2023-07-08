class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++)
                ans += nums[j];
            arr.push_back(ans);
            ans=0;
        }
        return arr;
    }
};