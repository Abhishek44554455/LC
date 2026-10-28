class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>arr;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr.push_back(matrix[i][j]);
            }
        }
        priority_queue<int>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};