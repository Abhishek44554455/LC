class Solution {
public:
    int bestClosingTime(string s) {
    //     int idx=0;
    //    int noz=0;
    //     int mn=INT_MAX;
    //     for(int i=0;i<s.size();i++){
    //     int penalty=0;
    //         for(int j=i;j<s.size();j++){
    //             if(s[j]=='Y'){
    //                 penalty++;
    //             }else{
    //                 noz++;
    //             }
                
    //         }
    //         if(penalty<mn){
    //                 mn=penalty;
    //                 idx=i;
    //             }

    //     }
    //     if(noz==0){
    //         return s.size();
    //     }else  return idx;
    int n=s.size();
    int pre[n+1];
    int suf[n+1];
    pre[0]=0;
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+((s[i]=='N') ? 1:0);

    }
    suf[n]=0;
    for(int i=n-1;i>=0;i--){
        suf[i]=suf[i+1]+((s[i]=='Y') ? 1:0);
    }
    int minPen=INT_MAX;
    for(int i=0;i<=n;i++){
        pre[i]+=suf[i];
        int pen=pre[i];
        minPen=min(minPen,pen);
    }
    for(int i=0;i<=n;i++){
        int pen=pre[i];
        if(pen==minPen) return i;
    }
    return n;
    }
};