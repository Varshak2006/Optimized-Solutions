class Solution {
public:
void solve(vector<int>& nums,vector<int>& path,vector<vector<int>>& res,int start){
    
    res.push_back(path);
    for(int i=start;i<nums.size();i++){
         if(i>start && nums[i]==nums[i-1]) continue;
        path.push_back(nums[i]);
        solve(nums,path,res,i+1);
        path.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>path;
        sort(nums.begin(),nums.end());
        solve(nums,path,res,0);
       
        // res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};
