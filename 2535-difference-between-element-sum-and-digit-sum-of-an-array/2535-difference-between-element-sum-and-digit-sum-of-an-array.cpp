class Solution {
public:
    int logic(int digit){
        string s = to_string(digit);
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
        ans += (s[i]-'0');
        }
        return ans; 
    } 
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int add=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int digit = nums[i];
            add += logic(digit);
        }
        return abs(sum - add);
    }
};