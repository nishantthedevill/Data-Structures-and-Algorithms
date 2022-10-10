import java.util.*;
class Solution {
    public static int sum(int num1, int num2) {
        int x = num1+num2;
        System.out.println(x);
        return x;
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int num1= s.nextInt();
        int num2=s.nextInt();
        sum(num1,num2);
    }
}