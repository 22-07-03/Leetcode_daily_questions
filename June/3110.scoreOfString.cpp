class Solution {
public:
    int scoreOfString(string s) {
        int ans =0; int n = s.size();
           for(int i =0;i<s.size()-1;i++){
                        int x = static_cast<int>(s[i]);
                        int y = static_cast<int>(s[i+1]);
                        ans += abs(x-y);
           }  
           

            return ans ;
    }
};
