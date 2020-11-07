class Solution {
public:
    int maxPower(string s) {
        int n=s.length();
        int tracker=1;
        int maxL=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                tracker++;
            }else{
                maxL=max(maxL,tracker);
                tracker=1;
            }
        }
        maxL=max(maxL,tracker);
        return maxL;
    }
};