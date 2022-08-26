https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int f=0;
        for(int k=0;k<4;k++){
            
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
            
        }
        for(int i=0;i<mat.size();i++)                
                reverse(mat[i].begin(),mat[i].end());
         
        f=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==target[i][j])
                  f++;  
            }
            
        }
        if(f==mat.size()*mat.size()){
           return true;
            
        }
       
      }
        return false;
    }
};
