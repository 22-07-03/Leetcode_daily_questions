class Solution {
public:
    int appendCharacters(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
      int currs = 0; int currt=0; // cuurentindexofs and currentindexoft;
      while(currs< s.size()  && currt< t.size()){
        if(s[currs]==t[currt]){
             currt++;
        }
        currs++;      }

    return t.size() - currt;      
    }
};
