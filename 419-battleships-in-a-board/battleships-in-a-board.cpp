class Solution {
public:
void dfs(vector<vector<char>>&board,int r,int c){
    if(r<0||c<0||r>=board.size()||c>=board[0].size()||board[r][c]=='.') return;
    board[r][c]='.';
    dfs(board,r,c+1);//right
    dfs(board,r+1,c);//down
    dfs(board,r,c-1);//left
    dfs(board,r-1,c);//right
}
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    dfs(board,i,j);
                    count++;
                }
            }
        }
    return count;
    }
};