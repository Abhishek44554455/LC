class Solution {
public:
    int strStr(string haystrack, string needle) {
        int m=haystrack.size();
        int n=needle.size();
        if(haystrack.size()<needle.size()) {
            return -1;
        }
        for(int i=0;i<=m-n;i++){
            if(haystrack.substr(i,needle.size())==needle){
                return i;
            }
        }
        return -1;
    }
};