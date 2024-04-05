class Solution {
public:
    string makeGood(string s) {
        if(s.size() <= 1) {
            return s;
        }
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && abs(st.top() - s[i]) == 32) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans; // Corrected this line
            st.pop();
        }
        return ans;
    }
};
