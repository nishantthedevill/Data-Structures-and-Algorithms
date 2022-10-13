import java.util.*;
class Solution {
    public static boolean isPowerOfTwo(int n) {
         return n > 0 && (n & (n-1))==0;
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        isPowerOfTwo(n);
    }    
}