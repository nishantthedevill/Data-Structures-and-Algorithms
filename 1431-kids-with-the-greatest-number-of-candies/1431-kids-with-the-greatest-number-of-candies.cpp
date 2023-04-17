class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int temp = INT_MIN;
        int n = candies.size();
        for(int i=0;i<n;i++){
            temp = max(temp,candies[i]);
        }
        vector<bool>ans;
        for(int i= 0;i<n;i++){
        if(candies[i]+extraCandies >= temp)
            ans.push_back(true);
        else
        ans.push_back(false);
        }
       return ans; 
    }
};