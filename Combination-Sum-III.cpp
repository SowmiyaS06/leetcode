class Solution {
public:
void backtrack(int start,int k,int n,vector<vector<int>>& res,vector<int>& curr){
    if(k==0){
        if(n==0){
            res.push_back(curr);
        }
        return;
    }
if(n<0||start>9||n==0&&k>0){
    return;
}
for(int i=start;i<=9;i++){
    curr.push_back(i);
    backtrack(i+1,k-1,n-i,res,curr);
    curr.pop_back();
}
}


    vector<vector<int>> combinationSum3(int k, int n) {
     vector<vector<int>> res;
        vector<int> curr;  
        backtrack(1,k,n,res,curr);
        return res; 
    }
};