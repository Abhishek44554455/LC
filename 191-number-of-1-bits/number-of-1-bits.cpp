class Solution {
public:
    int hammingWeight(int n) {
        int count=1;
        while(n!=0){
            if(n=n&(n-1)){
                count++;
            }
        }
        return count;
    }
};