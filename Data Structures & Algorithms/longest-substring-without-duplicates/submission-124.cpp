class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int best_len = 0;
        int start = 0;
        for(int i = 0; i < s.size(); i++) {
            if(!hash.contains(s[i])) {
                hash[s[i]] = i;
            }
            else {
                if(hash[s[i]] >= start) {
                    start = hash[s[i]] + 1;
                    hash[s[i]] = i;
                }
                else {
                    hash[s[i]] = i;
                }
            }

            if((i - start + 1) > best_len) {
                best_len = i - start + 1;
            }
        } 

        return best_len;
    }
};
