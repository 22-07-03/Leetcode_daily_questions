#pragma GCC optimize("03")
class Solution {
public:
    bool judgeSquareSum(int c) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        for(long a = 0; a * a <= c; a++) {
            long b = c - a * a;
            long sqrt_b = sqrt(b);
            if(sqrt_b * sqrt_b == b) {
                return true;
            }
        }
        return false;
    }
};
