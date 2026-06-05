class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLength=strs[0].size();

        for(int i=0;i<strs.size()-1;i++){
            string first=strs[i];
            string second=strs[i+1];
            int j=0;
            while(j<min(strs[i].size(),strs[i+1].size())){
                if(strs[i][j]!=strs[i+1][j]){
                    break;
                }
                j++;
            }
            minLength=min(minLength,j);

        }
        return strs[0].substr(0, minLength);
    }
};