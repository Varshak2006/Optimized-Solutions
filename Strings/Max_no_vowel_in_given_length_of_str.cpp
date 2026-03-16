
  class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, maxCount = 0;

        for (int i = 0; i < s.size(); i++) {

            // Check if current character is vowel
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || 
                s[i]=='o' || s[i]=='u')
                count++;

            // Remove the character going out of window
            if (i >= k && 
               (s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || 
                s[i-k]=='o' || s[i-k]=='u'))
                count--;

            // Update maxCount when window size becomes k
            if (i >= k - 1)
                maxCount = max(maxCount, count);
        }

        return maxCount;
    }

};
