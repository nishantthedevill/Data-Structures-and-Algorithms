import java.util.*;
class Solution {
    public static int mySqrt(int x) {
        double m = Math.sqrt(x);
        int n = (int)m;
        System.out.println(n);
        return n;
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        mySqrt(x);
    }
}