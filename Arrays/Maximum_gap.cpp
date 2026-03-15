class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int diff=0;
        int idx=0;
        int currdiff=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            diff=nums[i]-nums[idx];
            if(currdiff<diff){
                currdiff=diff; 
                           }
                           idx++;
        }
return currdiff;
    }
    
};
