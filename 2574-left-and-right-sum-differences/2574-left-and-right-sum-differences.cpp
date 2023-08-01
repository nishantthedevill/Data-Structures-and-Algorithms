class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v;
        int sum=0;
        vector<int>leftSum;
        for(int i=0;i<nums.size();i++){
            leftSum.push_back(sum);
            sum += nums[i];
            }
        // for(int i=0;i<leftSum.size();i++)
        // cout<<leftSum[i]<<" ";
        // cout<<endl;
        sum =0;
        vector<int>rightSum;
        for(int i=nums.size()-1;i>=0;i--){
            rightSum.push_back(sum);
            sum += nums[i];
            }
        reverse(rightSum.begin(),rightSum.end());
        // for(int i=0;i<leftSum.size();i++)
        // cout<<rightSum[i]<<" ";
       
        for(int i=0;i<nums.size();i++){
            v.push_back(abs(leftSum[i]-rightSum[i]));
            }    
        return v;
    }
};