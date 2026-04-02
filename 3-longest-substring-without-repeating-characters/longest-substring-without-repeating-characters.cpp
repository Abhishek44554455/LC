class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int right=0,left=0;
        int maxAns=0;
        int i=0;
        while(right<s.size()){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);

                maxAns=max(maxAns,right-left+1);
                right++;
            }else{
                
                st.erase(s[left]);
                left++;
            }
            
            
        }
        return maxAns;
    }
};