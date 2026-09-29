class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        unordered_set<int>s;
        int n=arr.size();
        int index=0;
        for(int i=0;i<n;i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                arr[index++]=arr[i];
            }
        }
        return s.size();
    }
};