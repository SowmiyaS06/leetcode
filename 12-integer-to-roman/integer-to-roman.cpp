class Solution {
public:
    string intToRoman(int num) {
        unordered_map<string, int> mp = {
            {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
            {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40},
            {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}
        };
        vector<string> order={
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };
        string res="";
        for(int i=0;i<order.size();i++){
            string sym=order[i];
            while(num>=mp[sym]){
                res+=sym;
                num-=mp[sym];
            }
        }
        return res;
        
    }
};