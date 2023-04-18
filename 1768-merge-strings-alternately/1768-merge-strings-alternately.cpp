class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string k = "";
        while(i<word1.length() && j<word2.length()){
            k+= word1[i];
            k+=word2[j];
            i++;
            j++;
        }
        while(i<word1.length()){
            k += word1[i];
            i++;
        }
        while(j<word2.length()){
            k += word2[j];
            j++;
        }
        return k;
    }
};