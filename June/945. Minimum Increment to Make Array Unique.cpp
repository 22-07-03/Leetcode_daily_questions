#pragma GCC optimize("03")
#include <vector>
#include <algorithm>

class Solution {
public:
    int minIncrementForUnique(std::vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        sort(nums.begin(), nums.end());
        int ans = 0;

        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i]<=nums[i-1]){
                ans+= nums[i-1]+1-nums[i];
                nums[i]= nums[i-1]+1;
            }
        }
        
        return ans;
    }
};
