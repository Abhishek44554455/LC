class Solution {
public:
    bool isVowel(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' );
        
        }
    
    long long countOfSubstrings(string word, int k) {
        int n=word.size();
        long long ans=0;
        // for(int i=0;i<n;i++){
        //     unordered_map<char,int>vowelFreq;
        //     int consonant=0;
        //     for(int j=i;j<n;j++){
        //         char ch=word[j];
        //         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
        //             vowelFreq[ch]++;
        //         }else{
        //             consonant++;
        //         }
        //         if(vowelFreq.size()==5 && consonant==k){
        //         ans++;
        //     }
        //     }
            
        // }

        //pre process the consonant
        vector<int> nextConsonant(n);
        int lastConsonantIdx=n;
        for(int i=n-1;i>=0;i--){
            nextConsonant[i]=lastConsonantIdx;
            if(!isVowel(word[i])){
                lastConsonantIdx=i;
            }
        }

        unordered_map<char,int>mp;
        long long result=0;
        int consonant=0;
        int i=0,j=0;
        while(j<n){
            char ch=word[j];
             if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
                mp[ch]++;
             }else{
                consonant++;
             }
            while(i<n && consonant>k){
                char ch=word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch]==0){
                        mp.erase(ch);
                    }
                }else{
                    consonant--;
                }
                i++;
            }
            while(i<n && mp.size()==5 && consonant==k){
                int idx=nextConsonant[j];
                result+=idx-j;
                char ch=word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch]==0){
                        mp.erase(ch);
                    }
                }else{
                        consonant--;
                }
                i++;
            }
            j++;
        }
        return  result;
    }
};