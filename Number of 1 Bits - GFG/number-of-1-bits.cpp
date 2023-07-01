//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int binaryNumber[32];
        int i= 0;
        int count =0;
        while(N>0){
            binaryNumber[i] = N%2;
            N = N/2;
            i++;
        }
        for(int j=0;j<i;j++){
            if(binaryNumber[j]==1)
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends