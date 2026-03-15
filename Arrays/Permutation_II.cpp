class Solution {
public:
void swap(int& i,int& j){
    int temp=i;
    i=j;
    j=temp;
}
void solve(vector<vector<int>>& ans,vector<int>&nums,int start){
        if(start==nums.size()){
            vector<int>res;
            for(int i=0;i<nums.size();i++){
                res.push_back(nums[i]);
            }
            ans.push_back(res);
            return;
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[i],nums[start]);
            solve(ans,nums,start+1);
            swap(nums[i],nums[start]);
        }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //nums.erase(unique(nums.begin(),nums.end()),nums.end());
        vector<vector<int>>ans;
        solve(ans,nums,0);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
