class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int ans =0;
        for(int i=0;i<n;i++){
            int k=sentences[i].size();
            int count = 1;
            for(int j=0;j<=k;j++){
                if(sentences[i][j]==' '){
                    count++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};