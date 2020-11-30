class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int i=0,j=n-1;
        int score=0;
        while(i<=j && (score || P>=tokens[i])){
            if(P>=tokens[i]){
                P=P-tokens[i];
                score+=1;
                i++;
            }else if(i!=j){
                P=P+tokens[j];
                score+=-1;
                j--;
            }
            else{
                break;
            }
        }
        return score;
    }
};