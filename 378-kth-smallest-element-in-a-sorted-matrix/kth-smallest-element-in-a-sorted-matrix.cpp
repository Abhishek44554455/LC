class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        for(int x:ans){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};