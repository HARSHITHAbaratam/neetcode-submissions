class NumMatrix {
private:
vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        prefix = vector<vector<int>>(n+1, vector<int>(m+1, 0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int top=prefix[i-1][j];
                int left=prefix[i][j-1];
                int topleft=prefix[i-1][j-1];
                prefix[i][j]=matrix[i-1][j-1]+top+left-topleft;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1+=1;
        col1+=1;
        row2+=1;
        col2+=1;
        int total=prefix[row2][col2];
        int top=prefix[row1-1][col2];
        int left=prefix[row2][col1-1];
        int topleft=prefix[row1-1][col1-1];
        return total-top-left+topleft;
    }

};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */