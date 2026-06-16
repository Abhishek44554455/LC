class Solution {
public:
    string reverse(string s){
        if(s.size()==0){
            return "";
        }
        int start=0;
        int end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++,end--;
        }
        return s;
    }
    string processStr(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                result.push_back(s[i]);
            }else if(s[i]=='*'){
                // if(isalpha(result[i])){
                //     result.pop_back();
                // }else{
                //     continue;
                // 
                if(result.size()!=0){
                    result.pop_back();
                }else{
                    continue;
                }
                
                
            }else if(s[i]=='#'){
                //  if(isalpha(result[i])){
                //     result.append(result);
                // }else{
                //     continue;
                // }
                if(result.size()!=0){
                    result.append(result);
                }else{
                    continue;
                }
                // result.append(result);
            }else if(s[i]=='%'){
                //  if(isalpha(result[i])){
                //     // result.pop_back();
                //     result= reverse(result);
                // }else{
                //     continue;
                // }
                // result=reverse(result);  
                 if(result.size()!=0){
                    result= reverse(result);
                }else{
                    continue;
                }
            }
        }
        return result;
        
    }
};