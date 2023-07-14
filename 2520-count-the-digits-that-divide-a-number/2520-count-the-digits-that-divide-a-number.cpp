class Solution {
public:
    int countDigits(int num) {
        int ans=num, count =0, res = 0;
        while(ans!=0){
            res = ans%10;
            if(num%res==0)
                count++;
            ans = ans/10;
        }
        return count;
    }
};