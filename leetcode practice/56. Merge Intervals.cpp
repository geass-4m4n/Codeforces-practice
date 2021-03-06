bool sortfun(const vector<int>&v1,const vector<int>&v2){
  return v1[0]<v2[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&v) {
        if(v.empty())
            return v;
        vector<vector<int>>res;
        sort(v.begin(),v.end(),sortfun);
        int i=-1,sz=v.size();
        while(++i<sz){
          if(i+1==sz or v[i][1]<v[i+1][0])
            res.push_back(v[i]);
          else{
            v[i+1][1]=max(v[i][1],v[i+1][1]);
            v[i+1][0]=min(v[i][0],v[i+1][0]);
        }
      }
        return res;
    }
};
