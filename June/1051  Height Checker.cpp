#pragma GCC optimize("03")
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int ans =0;
    vector<int>vec = heights;
    sort(vec.begin(), vec.end());
    for(int i =0;i<heights.size();i++){
        if(vec[i]!=heights[i]){
            ans++;
        }
    }
    return ans;
    }
};
