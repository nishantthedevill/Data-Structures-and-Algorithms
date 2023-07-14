class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;
        int ans = n;
        int res =0;
        while(ans!=1){
        if(ans%2==0){
            res = ans/2;
            ans = ans-res;
            count += res;
        }
        else{ 
            res = (ans-1)/2;
            ans = ans-res;
            count += res;
            }
        }
        return count;
    }
};