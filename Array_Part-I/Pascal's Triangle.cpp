class Solution {
public:
    vector<vector<int>> generate(int row_num) {
        vector<vector<int>>mat(row_num);
        
     for(int i=0;i<row_num;i++){
         mat[i].resize(i+1);
         mat[i][0]=1;
         mat[i][i]=1;
         for(int j=1;j<i;j++){
             mat[i][j]=mat[i-1][j]+mat[i-1][j-1];
         }
     }
        return mat;
   
 }
};
