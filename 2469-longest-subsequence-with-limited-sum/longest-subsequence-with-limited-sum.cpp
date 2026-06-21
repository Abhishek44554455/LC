class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        // int length=0;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
            int length=0;
            for(int j=0;j<n;j++){
                int sum=0;
                if(nums[j]>queries[i]) break;
                    length++;
            }
            ans.push_back(length);
        }
        return ans;
    }
};