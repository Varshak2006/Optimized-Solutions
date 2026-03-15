class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>a;
        vector<int>b;
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                   a.push_back(i);
                    b.push_back(j);
                }
            }
        }
        for(int i=0;i<a.size();i++){
            int n=a[i];
           
            for(int j=0;j<cols;j++){
               
                    matrix[n][j]=0;
                
            }
        }
         for(int i=0;i<b.size();i++){
            int n=b[i];
           for(int i=0;i<matrix.size();i++){
          
               
                    matrix[i][n]=0;
                
            }
        }
    }
};
