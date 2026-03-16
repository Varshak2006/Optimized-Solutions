class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0) return ans;
        for(int i=0;i<digits.size();i++){
            vector<string> curr;
            char ch=digits[i];
            switch(ch){
                case '2': curr = {"a","b","c"}; break;
                case '3': curr = {"d","e","f"}; break;
                case '4': curr = {"g","h","i"}; break;
                case '5': curr = {"j","k","l"}; break;
                case '6': curr = {"m","n","o"}; break;
                case '7': curr = {"p","q","r","s"};break;
                case '8': curr = {"t","u","v"}; break;
                case '9': curr = {"w","x","y","z"}; break;
            }
            if(ans.empty()){
                ans=curr;
            }
            else{
                vector<string>temp;
                for(auto x:ans){
                    for(auto y:curr){
                        temp.push_back(x+y);
                    }
                }
                ans = temp;
            }
        }
        return ans;
    }
};
