class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            map[c]++;
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];
            if(map[c]==0){
                return false;
            }
            map[c]--;
        }
        return true;
    }
};
