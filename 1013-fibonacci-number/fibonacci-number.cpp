class Solution {
public:
    int solveRec(int n){
        if(n==0 || n==1){
            return n;
        }
        int ans=solveRec(n-1)+solveRec(n-2);
        return ans;
    }
    int fib(int n) {
    return solveRec(n);   
    }
};