class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;
        int n=s.length();
        while(i<n){
            int j=0;
            while(i<n && s[i]!=' '){
                i++;
            }
            j=i+1;
            i--;
            while(i>=0 && s[i]!=' '){
                ans.push_back(s[i]);
                i--;
            }
            if(j<n){
                ans.push_back(' ');
            }
            i=j;
        }
        return ans;
    }
};
