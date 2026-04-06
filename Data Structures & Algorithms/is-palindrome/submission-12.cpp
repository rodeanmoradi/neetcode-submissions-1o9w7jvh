class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> new_s;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 48 && s[i] <= 57) {
                new_s.push_back(s[i]);
            }
            else if(s[i] >= 65 && s[i] <= 90) {
                new_s.push_back(s[i]);
            }
            else if(s[i] >= 97 && s[i] <= 122) {
                new_s.push_back(s[i]);
            }
        }

        if(new_s.size() == 1 || new_s.size() == 0) {
            return true;
        }

        char* left = &new_s[0];
        char* right = left + new_s.size() - 1;
        for(int i = 0; i < new_s.size(); i++) {
            if(left == right || left - right == 1) {
                return true;
            }
            if(*left == *right) {
                left += 1;
                right -= 1;
            }
            else if(*left > 57 && *left + 32 == *right) {
                left += 1;
                right -= 1;
            }
            else if(*right > 57 && *left - 32 == *right) {
                left += 1;
                right -= 1;
            }
            else {
                return false;
            }
        }
    }
};
