class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int p = cost[0];
        int q = cost[1];
        int c;

        for (int i = 2; i < n; i++) {
           c=cost[i]+min(p,q);
           p=q;
           q=c;
        }

        return min(p,q);
    }
};
