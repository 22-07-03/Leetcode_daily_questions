#pragma GCC optimize("03")
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int ans =0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for(int i =0;i<seats.size();i++){
          ans += abs(students[i]-seats[i]);   
        }
           return ans;
    }
};
