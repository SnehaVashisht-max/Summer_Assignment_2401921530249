class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(int i=0;i<magazine.length();i++){
            char c=magazine[i];
            map[c]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            char c=ransomNote[i];
            if(map[c]<=0){
                return false;
            }
            map[c]--;
        }
        return true;
    }
};
