class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int ans=0;
        int res =0;
        for(int i=0;i<row;i++){
            int col = accounts[i].size();
            for(int j=0;j<col;j++){
                ans+=accounts[i][j];
            }
            res = max(res,ans);
            ans=0;
        }
        return res;
    }
};