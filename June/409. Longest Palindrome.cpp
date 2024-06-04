class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;  // Change map<string, int> to unordered_map<char, int>

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        int ans = 0;

        for (auto &it : mp) {
            if (it.second % 2 == 0) {
                ans += it.second;  // we should form longest palindrome we should consider all even occurances and if odd occurences >2 the take even times it leaving 1 charecter of it
            } else {               // if we had atleast one instance of odd charecter we can add it to centre of palindrome.   
                ans += it.second - 1;
            }
        }

        if (s.size() > ans) {
            return ans + 1;
        } else {
            return ans;
        }
    }
};
