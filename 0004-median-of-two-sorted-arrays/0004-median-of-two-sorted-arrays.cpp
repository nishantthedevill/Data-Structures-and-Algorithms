class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
        return findMedianSortedArrays(nums2,nums1);
        int m = nums1.size();
        int n = nums2.size();
        int start=0; int end=m;
        while(start<=end){
            int i= start+(end-start)/2;
            int j=(m+n+1)/2-i;
            cout<<n<<" ";
            int max1=(i==0)? INT_MIN:nums1[i-1];
            int min1 = (i==m)? INT_MAX:nums1[i];
             int max2=(j==0)? INT_MIN:nums2[j-1];
            int min2=(j>=n)? INT_MAX:nums2[j];
           
            if(max1<=min2 && max2<=min1){
                if((m+n)%2==0)
                return ((double) max(max1,max2) + min(min1,min2))/2;
                else 
                return (double) max(max1,max2);
            }
            else if(max1 > min2)
            end=i-1;
            else 
            start=i+1;
        }
        return -1.0;
    }
};