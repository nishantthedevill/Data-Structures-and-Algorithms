class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1;
        int ans = 0;
        while(n!=0){
        int x =n%10;
        n = n/10;
        pro *= x;
        ans += x;
        }
        return (pro-ans);
    }
};