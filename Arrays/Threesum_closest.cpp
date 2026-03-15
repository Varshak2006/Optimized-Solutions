class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result=INT_MAX;
        int diff=INT_MAX;
        int ans=0;
        int closestsum = 0; 
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                     ans=nums[i]+nums[j]+nums[k];
                    
                  diff=abs(ans-target);
                  if(diff<result){
                   result=diff;
                   closestsum=ans;}}}}
                 return closestsum;
    }
};
