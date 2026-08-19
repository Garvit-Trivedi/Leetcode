class Solution {
public:
bool isValid(vector<vector<char>>& board , int row,int column,char num){
    for(int i=0;i<9;i++){
        if(board[row][i] == num)
        return false;
    }

      for(int j=0;j<9;j++){
        if(board[j][column] == num)
        return false;
    }

    int starrow = (row/3)*3;
    int starcolumn = (column/3)*3;
    for(int i=starrow;i<starrow+3;i++){
        for(int j=starcolumn;j<starcolumn+3;j++){
            if(board[i][j] == num){
                return false;
            }
        }
    }
    return true;
}


    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {

            for (int col = 0; col < 9; col++) {

                if (board[row][col] == '.') {
                    for (char num = '1'; num <= '9'; num++) {

                        if (isValid(board, row, col, num)) {
                            board[row][col] = num;
                            if (solve(board))
                                return true;
                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};