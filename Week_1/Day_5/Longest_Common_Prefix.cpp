class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string temp="";
        int i=0;
        int n=strs.size();
        while(i<strs[0].length()){
            if(strs[0][i]==strs[n-1][i]){
                temp+=strs[0][i];
            }
            else break;
            i++;
        }
        return temp;
    }
};
