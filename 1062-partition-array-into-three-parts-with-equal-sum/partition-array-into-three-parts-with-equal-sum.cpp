class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        vector<int>res;
        int total=0;
        for(int ele:arr){
            total+=ele;
        }
        if(total%3!=0){
            res= {-1,-1};
            return false;
        }
        int currSum=0;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            if(currSum==total/3){
                currSum=0;
                res.push_back(i);
            }
            if(res.size()==2 && i<arr.size()-1){
                return true;
            }
        }
        res= {-1,-1};
        return false;
    }
};