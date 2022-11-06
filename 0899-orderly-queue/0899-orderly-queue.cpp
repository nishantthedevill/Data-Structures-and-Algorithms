class Solution {
    public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }else{
            int n = s.size();
            
            char mn = s[0];

            for(int i=1;i<n;i++)
                mn > s[i] ? mn = s[i]:mn = mn;
            
            string ans = "z";
            ans[0] += 1;
            
            s += s;

            for(int i=0;i<n;i++){
                if(s[i]==mn)
                    ans = min(ans,s.substr(i,n));
            }
            return ans;
        }
    }
};