https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
       unordered_set<int>rset,cset;
       for(int i=0;i<mat.size();i++){
           for(int j=0;j<mat[i].size();j++){
               if(mat[i][j]==0){
                   if(rset.find(i)==rset.end())
                      rset.insert(i);
                   if(cset.find(j)==cset.end())
                       cset.insert(j);
               }
           }
       }
      for(auto it= rset.begin();it!=rset.end();it++ ){
          int i=*it;
          for(int j=0;j<mat[i].size();j++){
              mat[i][j]=0;
          }
      } 
      for(auto it= cset.begin();it!=cset.end();it++){
          int j=*it;
          for(int i=0;i<mat.size();i++){
              mat[i][j]=0;
          }
      }   
            
    }
};
