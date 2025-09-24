class Solution {
public:
void backtrack(int start,vector<int>& candidates, int target,vector<vector<int>>&res,vector<int>&curr){
    if(target<0) return;
    if(target==0){
        res.push_back(curr);
        return;
    }
    for(int i=start;i<candidates.size();i++){
        curr.push_back(candidates[i]);
        backtrack(i,candidates,target-candidates[i],res,curr);
        curr.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(0,candidates,target,res,curr);
        return res;
    }
};