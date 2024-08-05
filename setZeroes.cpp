class Solution {
public:
    // void zerosetter(vector<vector<int>>& matrix, int row, int col, int n, int m){
    //     for(int i = 0; i < m; i++){
    //         matrix[row][i] = 0;  
    //     }
    //     for(int j = 0; j < n; j++){
    //         matrix[j][col] = 0;  
    //     }
    // }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> zeroRows(n, 0);
        vector<int> zeroCols(m, 0);

       
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    zeroRows[i] = 1;
                    zeroCols[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(zeroRows[i] == 1 || zeroCols[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
