class Solution {
public:
    typedef pair<int, int> pi;
    struct Compare {
        bool operator()(pair<int,int>& a, pair<int,int>& b) {

            // Smaller frequency has higher priority
            if (a.first != b.first)
                return a.first > b.first;

            // Larger value has higher priority
            return a.second < b.second;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        priority_queue<pi, vector<pi>,Compare> pq;
        for (int elem : nums) {
            mp[elem]++;
        }
        for (auto x : mp) {
            int elem = x.first;
            int freq = x.second;
            pq.push({freq, elem});
        }
        while (!pq.empty()) {
            int n = pq.top().first;
            int elem = pq.top().second;
            pq.pop();
            for (int i = 0; i < n; i++) {
                ans.push_back(elem);
            }
        }
        return ans;
    }
};