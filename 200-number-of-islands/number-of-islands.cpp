class Solution {
public:
void dfs(vector<vector<char>>&grid,int r,int c){
    if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]=='0') return;
    grid[r][c]='0';
    dfs(grid,r,c+1);//right
    dfs(grid,r+1,c);//down
    dfs(grid,r,c-1);//left
    dfs(grid,r-1,c);//right
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
    return count;

    }
};