class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
       
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
            
            int left=j+1;
            int right=nums.size()-1;
            while(right>left){
                long long sum=(long long)nums[i]+nums[j]+nums[right]+nums[left];
                if(sum==target){
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }}
        }
        return ans;
    }
};
// vector<vector<int>>res;
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < n; i++){
        //      if(i > 0 && nums[i] == nums[i-1]) continue;
        //     for(int j = i + 1; j < n; j++){
        //          if(j > i+1 && nums[j] == nums[j-1]) continue;
        //         for(int k = j + 1; k < n; k++){
        //              if(k > j+1 && nums[k] == nums[k-1]) continue;
        //             for(int l = k + 1; l < n; l++){
        //                  if(l > k+1 && nums[l] == nums[l-1]) continue;
        //                 long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
        //                 if(sum == target){
        //                     res.push_back({nums[i],nums[j],nums[k],nums[l]});
        //                 }
        //             }   }   } }
        //res.push_back(ans);
         // return res;
