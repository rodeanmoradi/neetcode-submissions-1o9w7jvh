class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort by ascii val
        // compare
        string s_sorted = s;
        std::sort(s_sorted.begin(), s_sorted.end());
        string t_sorted = t;
        std::sort(t_sorted.begin(), t_sorted.end());

        if (s_sorted == t_sorted) {
            return true;
        }

        return false;

    }
};
