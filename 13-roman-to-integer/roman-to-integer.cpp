class Solution {
public:
    unordered_map<char,int> val = {
            {'I',1}, {'V',5}, {'X',10},
            {'L',50}, {'C',100}, {'D',500}, {'M',1000}
        };
    int romanToInt(string s) {
        int total=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int next=val[s[i+1]];
            int curr=val[s[i]];
            if(i+1<n&&next>curr)
                total-=curr;
            else total+=curr;
        }
        return total;
    }
};