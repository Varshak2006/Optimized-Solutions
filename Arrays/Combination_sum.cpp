class Solution {
public:

void solve(vector<int>&path, vector<vector<int>>&res,vector<int>&candidates,int start,int target){
      if(target==0){
        res.push_back(path);
        return;
      }
      if(target<0) return;
      
for(int i=start;i<candidates.size();i++){
path.push_back(candidates[i]);
solve(path,res,candidates,i,target-candidates[i]);
path.pop_back();
}
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>path;
        vector<vector<int>>res;
        solve(path,res,candidates,0,target);
        return res;
    }
};
