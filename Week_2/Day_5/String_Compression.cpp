class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int j=0;
        for(int i=0;i<n;i++){
            char ch=chars[i];
            int count=0;
            while(i<n && ch==chars[i]){
                count++;
                i++;
            }
            if(count==1){
                chars[j++]=ch;
            }
            else{
                chars[j++]=ch;
                string str=to_string(count);
                for(char digit:str){
                    chars[j++]=digit;
                }
            }
            i--;
        }
        return j;
    }
};
