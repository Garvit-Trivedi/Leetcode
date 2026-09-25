class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
vector<pair<int,int>> position;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
      position.push_back({i,j});
                }
            }
        }
    for(auto p: position){
        int row = p.first;
        int col = p.second;

        for(int i = 0;i<m;i++){
            matrix[row][i] = 0;
        }

        for(int i =0; i<n;i++){
            matrix[i][col] = 0;
        }
    }

    }
};