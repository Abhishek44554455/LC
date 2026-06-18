class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        stack<int>st;
        int n=arr.size();
        vector<int> ans(n);
        ans[n-1]=0;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
                count++;
            }
            if(st.size()!=0){
                count++;
            }
            ans[i]=count;
            st.push(arr[i]);
        }
        return ans;
    }
};