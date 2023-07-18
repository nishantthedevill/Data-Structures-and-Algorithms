class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v1;
        // int i=0;
        int count=0;
        int ans=0;
        while(n>0){
           int i = n%10;
            n=n/10;
            v1.push_back(i);
            
        }
        
        
        for(int a=v1.size()-1;a>=0;a--){
            count++;
            if(count%2==0){
                ans= ans+ (v1[a]*-1);
            }
            else{
                ans=ans+v1[a];
            }
        }
        return ans;
            
            
        
    }
};