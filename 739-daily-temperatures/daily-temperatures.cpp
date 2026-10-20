class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        st.push(n-1);
        vector<int>ans;
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            int span=st.empty()?0:st.top()-i;
            ans.push_back(span);
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};