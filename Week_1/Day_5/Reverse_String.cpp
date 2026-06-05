class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int ends= s.size()-1;
        while(start<ends){
            swap(s[start++],s[ends--]);
        }
        
    }
};
