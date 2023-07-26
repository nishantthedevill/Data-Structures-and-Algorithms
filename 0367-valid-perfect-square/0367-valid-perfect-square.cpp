class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
       for(long long i=1;i<=num/2;i++){
           if(num==(i*i))
              return true;
       } 
              return false;
    }
};