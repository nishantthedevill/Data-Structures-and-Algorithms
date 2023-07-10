class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int ans=0;
        int i=0;
        while(i<n){
            if(operations[i]=="++X"|| operations[i]=="X++")
             ans += 1;
            else
            ans -= 1;
                i++;
            }             
        
        return ans;
    }
};