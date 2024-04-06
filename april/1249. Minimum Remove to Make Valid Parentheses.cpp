class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int openpar =0, closepar =0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){openpar++;}
            else if(s[i]==')'){
                if(openpar==0){s[i]='*';}
                else{openpar--;}
            }
            
        }
        for(int i = s.size()-1;i>=0;i--){
            if(openpar>0 && s[i]=='('){
                s[i]='*'; openpar--;
            }
        }
        string ans ="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                ans+=s[i];
            }
        }
        return ans;
        
    }
};
