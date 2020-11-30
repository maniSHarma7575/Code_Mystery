class Solution {
public:
    bool buddyStrings(string A, string B) {
        int n=A.length();
        int m=B.length();
        if(n!=m){
            return false;
        }
        int a[26];
        int diff=0;
        memset(a,0,sizeof(a));
        char prevA,nextA,prevB,nextB;
        for(int i=0;i<n;i++){
            if(A[i]!=B[i]){
                if(diff==0){
                    prevA=A[i];
                    prevB=B[i];
                }
                if(diff==1){
                    nextA=A[i];
                    nextB=B[i];
                }
                diff++;
            }
            a[A[i]-97]++;
            
        }
        if(diff==0){
            for(int i=0;i<26;i++){
                if(a[i]>1){
                    return true;
                }
            }
            return false;
        }
        if(diff==2){
            if(prevA==nextB && prevB==nextA){
                return true;
            }
            return false;
        }
        return false;
    }
};