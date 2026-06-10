class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int length=1;length<=n/2;length++){
            if(n%length==0){
                string str=s.substr(0,length);
                string t="";
                int i=n/length;
                for(int j=0;j<i;j++){
                    t+=str;
                }
                if(t==s){
                    return true;
                }
            }
        }
        return false;
    }
};
