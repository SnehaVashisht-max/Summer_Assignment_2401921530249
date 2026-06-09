class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        unordered_map<char,int> mp;
        for(char c: s1){
            mp[c]++;
        }
        int l=0;
        int count=s1.length();
        for(int r=0;r<s2.length();r++){
            char ch=s2[r];
            int val=mp[ch];
            if(val>0){
                count--;
            }
            mp[ch]=val-1;
            if (count==0){
                return true;
            }
            if(r-l+1 ==s1.length()){
                char leftchar= s2[l];
                int leftval=mp[leftchar];
                if(leftval>=0) count++;
                mp[leftchar]=leftval+1;
                l++;
            }
        }
        return false;
        
    }
};
