class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>>res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int j=i+1, k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]>0)
                    k--;
                else if(nums[i]+nums[j]+nums[k]<0)
                   j++;
                else
                   { res.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;}
                
            }
        }
        for(auto i:res)
            ans.push_back(i);
        return ans;
    }
};