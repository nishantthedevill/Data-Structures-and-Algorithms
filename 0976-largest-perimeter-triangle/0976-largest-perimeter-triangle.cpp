class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());  // sort nums in increasing order
        for(int i=nums.size();i>=3;i--){ // iterate from the end
            int a=nums[i-3],b=nums[i-2],c=nums[i-1];
            if( a+b>c && b+c>a && c+a>b)  // return perimeter if triangle is valid
                return a+b+c;
        }
        return 0;
    }
};