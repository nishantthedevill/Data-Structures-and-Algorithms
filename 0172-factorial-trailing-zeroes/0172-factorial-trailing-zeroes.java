import java.util.*;
class Solution {
    public static int trailingZeroes(int n) {
        int res = 0;
        for(int i=5;i<=n;i=i*5){
            res = res+(n/i) ;
            
        }
        return res;
     }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        trailingZeroes(n);
    }
}