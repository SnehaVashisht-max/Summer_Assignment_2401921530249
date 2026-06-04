class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int a=mat.size();
        int b=mat[0].size();
        if(a*b!=r*c){
            return mat;
        }
        vector<vector<int>> ans(r,vector<int>(c));
        int cnt=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                ans[cnt/c][cnt%c]=mat[i][j];
                cnt++;
            }
        }
        return ans;
    }
};
