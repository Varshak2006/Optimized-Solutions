class Solution {
public:
void solve(vector<int>&path, vector<vector<int>>&res,vector<int>& candidates,int start,int target){
    if(target==0){res.push_back(path);return;}
    if(target<0) return;
    for(int i=start;i<candidates.size();i++){
         if(i>start && candidates[i]==candidates[i-1]) continue;
        path.push_back(candidates[i]);
        solve(path,res,candidates,i+1,target-candidates[i]);
        path.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>path;
        solve(path,res,candidates,0,target);
        
        return res;
    }
};
