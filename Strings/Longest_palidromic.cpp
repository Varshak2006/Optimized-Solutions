class Solution {
public:
string expand(string s,int left,int right){
    while(left>=0 && right<s.size() && s[left]==s[right]){
        left--;
        right++;
    }
    return s.substr(left+1,right-left-1);
}
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            string p1=expand(s,i,i);
            if(p1.length()>ans.length()){ans=p1;}
            string p2=expand(s,i,i+1);
            if(p2.length()>ans.length()){ans=p2;}
        }
        return ans;
    }
};
