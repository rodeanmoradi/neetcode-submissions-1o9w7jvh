class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        std::unordered_map<char, char> s_map;
        std::unordered_map<char, char> t_map;
        for(int i = 0; i < s.size(); i++) {
            s_map[s[i]] = s[i];
            t_map[t[i]] = t[i];
            if (s_map[s[i]] == t_map[t[i]]) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
