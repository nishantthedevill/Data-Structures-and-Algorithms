class Solution {
public:
    int reverse(int x) {
        long long ct = 0;
        while(x!=0){
            if(ct>INT_MAX/10 || ct<INT_MIN/10)
                return 0;
            ct = ct*10+x%10;
            x = x/10;
        }
        return ct;
    
        
    }
};