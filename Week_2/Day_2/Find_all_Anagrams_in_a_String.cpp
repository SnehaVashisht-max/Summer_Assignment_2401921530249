class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.length()<p.length()){
            return ans;
        }
        unordered_map<char,int> mp;
        for(char c:p){
            mp[c]++;
        }
        int l=0;
        int count=p.length();
        for(int r=0;r<s.length();r++){
            char ch=s[r];
            int val=mp[ch];
            if(val>0){
                count--;
            }
            mp[ch]=val-1;
            
            if(r-l+1>p.length()){
                char leftChar=s[l];
                int leftVal=mp[leftChar];
                if(leftVal>=0){
                    count++;
                }
                mp[leftChar]=leftVal+1;
                l++;
            }
            if(count==0){
                ans.push_back(l);
            }
        }
        return ans;
    }
};
