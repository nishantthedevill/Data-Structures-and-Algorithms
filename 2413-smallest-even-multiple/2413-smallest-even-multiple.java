import java.util.*;
class Solution {
    public static int smallestEvenMultiple(int n) {
        if(n%2 == 0){
            System.out.println(n);
            return n;
        }else{
            int x = n*2;
            System.out.println(x);
            return x;
        }
        
    }
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        int n = s.nextInt();
        smallestEvenMultiple(n);
    }
}