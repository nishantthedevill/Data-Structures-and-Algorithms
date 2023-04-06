//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        long long temp=0;
        long long product=1;
        sort(a,a+n);
        sort(b,b+n);
        int i=0;
        int j=n-1;
        while((i<n) && (j>=0)){
            product = a[i]*b[j];
            i++;
            j--;
            temp += product;
            }
            
            return temp;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, i;
         cin>>n;
         int a[n], b[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         for(i=0;i<n;i++)
         cin>>b[i];
         Solution ob;
         cout<< ob.minValue(a, b, n) <<endl;
     }
	
	return 0;
}
// } Driver Code Ends