import java.util.*;
class Solution {
    public static int getSum(int a, int b) {
       while(b !=0 ) {
       int c = (a&b);
        a = a ^ b;
        b = (c)<<1;
      }
      return a;
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        getSum(a,b);
    }
}