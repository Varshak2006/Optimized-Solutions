class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int left=0;
        int minlength=INT_MAX;
        int n=nums.size();
    
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
               sum-=nums[left];
               
                 minlength=min(minlength,i-left+1);
                  left++;
            }
           
        }
        if(minlength==INT_MAX){
            return 0;
        }
       
        return minlength;
    }
};
