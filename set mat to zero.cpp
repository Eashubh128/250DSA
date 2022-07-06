class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<bool> rowctr(row,false);
        vector<bool> colctr(col,false);
        
        
        for(int i =0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowctr[i]=true;
                    colctr[j]=true;
                    
                }
            }
        }
        
        for(int i =0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(rowctr[i]==true || colctr[j]==true)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};
