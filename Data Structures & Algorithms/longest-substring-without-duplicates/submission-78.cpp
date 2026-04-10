class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> chars;
        int best_len = 0;
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.size(); i++) {
            if(!chars.contains(s[i])) {
                chars[s[i]] = true;
                end += 1;
            }
            else {
                if(s[start] == s[i]) {
                    start += 1;
                    end = i + 1;
                }
                
                else {
                    start = i;
                    end = i;

                    chars.clear();
                }
            }

            if((end - start) > best_len) {
                best_len = end - start;
            }
        } 

        return best_len;
    }
};
