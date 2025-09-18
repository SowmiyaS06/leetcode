class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int l=0,res=0,mc=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]]++;
            mc=max(mc,freq[s[r]]);
            while((r-l+1)-mc>k){
                freq[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
        
    }
};