class Solution {
public:
    int digitSum(int num){
        int i=num;
        int ans=0;
        while(i!=0){
            ans += i%10;
            i=i/10;
        }
        return ans;
    }
    int countEven(int num) {
        int count =0;
        int i =num;
        int ans = 0;
       while(i>=1){
           ans = digitSum(i);
           if(ans%2==0)
           count++;
           
          i--;
       }
        return count;
    }
};