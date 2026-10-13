class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        unordered_map<int,int>mp;
        for(int elem:nums){
            mp[elem]++;
        }
        for(auto x:mp){
            int elem=x.first;
            int freq=x.second;
            pq.push({freq,elem});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};