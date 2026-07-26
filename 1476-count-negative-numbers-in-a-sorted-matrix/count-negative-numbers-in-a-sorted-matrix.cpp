class Solution {
public:
    int countNegatives(vector<vector<int>>& mat) {
        int m=mat.size();
        int count=0;
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};