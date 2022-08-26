https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>>vv;
        
        
        if(in.size()==0)
            return vv;
        sort(in.begin(),in.end());
        vector<int>nn=in[0];
                for(auto it:in)
        {
            //cout<<it[1]<<" ";
            //cout<<nn[1]<<" ";
            if(it[0]<=nn[1])
            {
                //cout<<it[0]<<" ";
                //cout<<nn[1]<<" ";
                nn[1]= max(it[1],nn[1]);
                //cout<<nn[1]<<" ";
            }
            else
            {
                vv.push_back(nn);
                nn=it;
            }
        }
        vv.push_back(nn);
        return vv;
    }
};
