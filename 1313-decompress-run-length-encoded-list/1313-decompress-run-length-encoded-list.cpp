class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i+1<nums.size()-i;i++){
            int freq = nums[2*i];
            int val = nums[2*i+1];
            while(freq--)
                arr.push_back(val);
        }
        return arr;
    }
};