//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
        int sumOfNaturals(int n) {
        // code here
         long long int  ans =(long)n*(n+1)/2;
         long long int mod=1000000007;
         long long int res=(long)ans%mod;
         return (int)res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends