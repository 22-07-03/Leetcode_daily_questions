#pragma GCC optimize("03")
#include <vector>
#include <map>

using namespace std;
// not an optimized approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        nums.clear();

        for (auto it : mp) {
            for (int i = 0; i < it.second; i++) {
                nums.push_back(it.first);
            }
        }
    }
};
