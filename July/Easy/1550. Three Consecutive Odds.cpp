#pragma GCC optimize("03")
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int curr=0; int ans =0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]%2==1){
                curr++;
            }
            else{
                if(curr>=3){
                    return true;
                }
                curr=0;
            }
        }

        if(curr>=3){return true;}
       
        return false;
    }
};
