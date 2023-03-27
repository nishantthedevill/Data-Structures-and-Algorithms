class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        if(nums.size()==1)
        return start;
        while(start<=end){
            int mid = start+(end-start)/2;
            if((mid==0 || nums[mid]>nums[mid-1]) && (mid==nums.size()-1 || nums[mid]>nums[mid+1]))
            return mid;
            else if(nums[mid+1]>nums[mid])
            start = mid+1;
            else
            end = mid-1;
        }
       return -1; 
    }
};