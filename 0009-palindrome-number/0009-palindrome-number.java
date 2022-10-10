import java.util.*;
class Solution {
    public static boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int res = 0;
        int n = x;
        while(x!=0){
        res = res*10 + x%10;
        x = x/10;
        }  
        return (res==n);
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        isPalindrome(x);
    }
}