class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0,right=0,ml=0;
        while(right<s.size()){
            if(!st.count(s[right])){
                st.insert(s[right]);
                ml=max(ml,right-left+1);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return ml;
    }
};