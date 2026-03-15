class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int zerocount=0;
        int totalproduct=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zerocount++;
            }
            else{
            totalproduct*=nums[i];
            }
                
        }
        for(int i=0;i<nums.size();i++){
           
           if(zerocount>1){
           ans[i]=0;
           }
           else if(zerocount==1){
            if(nums[i]==0){
             ans[i]=totalproduct;}
             else{
                ans[i]=0;
             }
           }
           else{
            ans[i]=totalproduct/nums[i];
           }
        }
        return ans;
    }
};
