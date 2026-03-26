class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> f;

        //store key value pair of magazine
        for (int i = 0; i < magazine.size(); i++) {
            f[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            if (f[ransomNote[i]] == 0) {
                return false;
            } 
                f[ransomNote[i]]--;
            
           
        }
        return true; 
        
    }
};