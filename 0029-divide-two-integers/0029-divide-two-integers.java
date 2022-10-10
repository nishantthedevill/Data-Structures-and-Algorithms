import java.util.*;
class Solution {
    public static int divide(int dividend, int divisor) {
        if(dividend ==Integer.MIN_VALUE  &&   divisor == -1)
            return Integer.MAX_VALUE;
        int div = dividend/divisor;
        if(divisor==0){
            System.out.println("0");
            return 0;
        } else{
            if(dividend < 0 && divisor < 0)
            {
                div=Math.abs(div);
            }
            System.out.println(div);
        }
        return div;
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int dividend = s.nextInt();
        int divisor = s.nextInt();
        divide(dividend,divisor);
    }
}