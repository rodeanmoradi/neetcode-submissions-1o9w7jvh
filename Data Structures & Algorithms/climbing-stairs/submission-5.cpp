class Solution {
public:
    std::unordered_map<int, int> paths;
    int climbStairs(int n) {
        if(n < 2) {
            return 1;
        }   
        
        if(n == 2) {
            return 2;
        } 

        if(!paths.contains(n)) {
            paths[n] = climbStairs(n - 1) + climbStairs(n - 2);
        }
        return paths[n];
    }
};
