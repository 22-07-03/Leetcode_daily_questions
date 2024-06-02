#include <vector>
#include <stack>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        stack<char> st;
        for (auto c : s) {
            st.push(c);
        }
        s.clear();
        while (!st.empty()) {
            char c = st.top();
            s.push_back(c);
            st.pop();
        }
    }
};

//    reverse(s.begin(), s.end());
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int u=s.size()-1;
//         for(int i=0;i<s.size()/2;i++){
//             swap(s[i],s[u]);
//             u--;
//         }
        
//     }
// };
