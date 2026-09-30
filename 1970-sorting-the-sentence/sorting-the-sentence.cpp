class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string>ans(10);
        string result;
        while(ss>>word){
            int pos=word.back()-'0';
            word.pop_back();
            ans[pos]=word;
        }
        for(auto x:ans){
            if(x!="")
            result=result+x+" ";
        }
        result.pop_back();
        return result;
    }
};