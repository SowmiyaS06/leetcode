class Solution {
public:
int sum=0;
void dfs(vector<vector<int>>&grid,int r,int c){
    if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]==0) return;
    sum+=grid[r][c];
    grid[r][c]=0;
    dfs(grid,r,c+1);//right
    dfs(grid,r+1,c);//down
    dfs(grid,r,c-1);//left
    dfs(grid,r-1,c);//right
}
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int max=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    sum=0;
                    dfs(grid,i,j);
                    if(sum>max)max=sum;

                }
            }
        }
    return max;
    }
};