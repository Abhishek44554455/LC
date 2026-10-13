class Solution {
public:
    typedef pair<int, int> pi;
    struct Compare {
        bool operator()(pair<int, int>& a, pair<int, int>& b) {
            if (a.first != b.first) {
                return a.first < b.first;
            }
            return a.second < b.second;
        }
    };
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
        priority_queue<pi>pq;
        for (int a : arr) {
            int distance = abs(a - x);
            int val = a;
            pq.push({distance, val});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        // for (int i = 0; i < k; i++) {
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};