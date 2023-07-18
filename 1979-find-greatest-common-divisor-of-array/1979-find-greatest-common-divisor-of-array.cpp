class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(),nums.end());
        int p = nums[0], q = nums[n-1];
        int i =1;
        int res =1;
        while(i<=q){
            if(p%i==0 && q%i==0)
                res = i;
            i++;
        }
        return res;
    }
};