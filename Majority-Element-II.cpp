class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0;  // candidates
        int ct1 = 0, ct2 = 0; // counts

        // Phase 1: Find potential candidates
        for (int ele : nums) {
            if (ele == c1) ct1++;
            else if (ele == c2) ct2++;
            else if (ct1 == 0) { c1 = ele; ct1 = 1; }
            else if (ct2 == 0) { c2 = ele; ct2 = 1; }
            else { ct1--; ct2--; }
        }

        // Phase 2: Verify candidates
        ct1 = ct2 = 0;
        for (int ele : nums) {
            if (ele == c1) ct1++;
            else if (ele == c2) ct2++;
        }

        vector<int> res;
        int n = nums.size();
        if (ct1 > n/3) res.push_back(c1);
        if (ct2 > n/3) res.push_back(c2);

        return res;
    }
};
