class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       int top=0;
       int down=n-1;
       int left=0;
       int right=n-1;
       int id=0;
       int counter=1;
       vector<vector<int>> matrix(n,vector<int>(n));
       while(top<=down && left<=right){
        if(id==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=counter;
                counter++;
            }
            top++;
        }
        if(id=1){
            for(int i=top;i<=down;i++){
                matrix[i][right]=counter;
                counter++;
            }
            right--;
        }
        if(id=2){
            for(int i=right;i>=left;i--){
                matrix[down][i]=counter;
                counter++;
            }
            down--;
        }
        if(id=3){
            for(int i=down;i>=top;i--){
                matrix[i][left]=counter;
                counter++;
            }
            left++;
        }
        // id++;
        id=(id+1)%4;
       }
       return matrix;
    }
};