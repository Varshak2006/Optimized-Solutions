class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length()==0) return 0;
       stack<int>st;
       st.push(-1);
       int cnt=0;
       for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                st.push(i);
                }
                else{
                    cnt=max(cnt,i-st.top());
                }
            }
         }
         return cnt;
       }
     
};
