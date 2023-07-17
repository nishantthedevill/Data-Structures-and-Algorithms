class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        int res =nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int ans = nums[i]+nums[j]+nums[k];
                if(ans == target) return ans;
                if(abs(target-ans)<abs(target-res))
                    res = ans;
                if(ans>target) k--;
                else
                    j++;
            }
        }
        return res;
    }
};