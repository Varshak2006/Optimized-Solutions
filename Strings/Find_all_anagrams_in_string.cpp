class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freqs(26,0);
        vector<int>freqp(26,0);
        vector<int>result;
        for(int i=0;i<p.size();i++){
            freqp[p[i]-'a']++;
        }
        int k=p.size();
        for(int i=0;i<s.size();i++){
            freqs[s[i]-'a']++;
            if(i>=k){freqs[s[i-k]-'a']--;}
            if(freqs==freqp){result.push_back(i-k+1);}
        }
        return result;

    }
};
