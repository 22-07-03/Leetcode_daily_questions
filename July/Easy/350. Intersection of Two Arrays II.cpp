class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<int>ans; map<int,int>mp1,mp2;
        for(int i =0;i<nums1.size();i++){ mp1[nums1[i]]++;}
        for(int i =0;i<nums2.size();i++){mp2[nums2[i]]++;}
        for(auto it : mp1){
            int num = it.first;
            auto it1 = mp2.find(num);
            if(it1!=mp2.end()){
                int val = min(it.second, it1->second);
                for(int i =1;i<=val;i++){
                    ans.push_back(it.first);
                }
            }
        }

        return ans;
    }
};
