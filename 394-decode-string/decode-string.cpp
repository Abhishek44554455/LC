class Solution {
public:
    string decodeString(string s) {
        //traversing the encoded string
        string result="";
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=']'){
                result.push_back(s[i]);
            }else{
                string str="";
                //extract from result until reach '[
                while(!result.empty() && result.back()!='['){
                    str.push_back(result.back());
                    result.pop_back();
                }
                reverse(str.begin(),str.end());
                //remove last char from string which is '['
                result.pop_back();
                //extract number from result
                string num="";
                while(!result.empty() &&( result.back()>='0' && result.back()<='9')){
                    num.push_back(result.back());
                    result.pop_back();
                }
                //reversing num
                reverse(num.begin(),num.end());

                //convert to string to integer
                int int_num=stoi(num);
                while(int_num){
                    result+=str;
                    int_num--;
                
                }
            }

        }
        return result;
    }
};