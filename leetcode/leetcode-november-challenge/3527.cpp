class Solution {
public:
    int calDist(vector<int> &p1,vector<int>& p2){
        int d=(p2[0]-p1[0])*(p2[0]-p1[0])+(p2[1]-p1[1])*(p2[1]-p1[1]);
        return d;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int dp[5][5];
        dp[1][2]=calDist(p1,p2);
        dp[1][3]=calDist(p1,p3);
        dp[1][4]=calDist(p1,p4);
        dp[2][3]=calDist(p2,p3);
        dp[2][4]=calDist(p2,p4);
        dp[3][4]=calDist(p3,p4);
        if(dp[1][2]==0 || dp[1][3]==0 || dp[1][4]==0 || dp[2][3]==0 || dp[2][4]==0 || dp[3][4]==0)return false;
        if(dp[1][2]==dp[1][3]+dp[2][3] && dp[1][2]==dp[1][4]+dp[2][4] && (dp[1][3]==dp[2][3]) && (dp[2][3]==dp[1][4]) &&(dp[1][4]==dp[2][4])){
            return true;
        }
        if(dp[1][3]==dp[1][2]+dp[2][3] && dp[1][3]==dp[1][4]+dp[3][4] && (dp[1][3]==dp[2][3]) && (dp[2][3]==dp[1][4]) &&(dp[1][4]==dp[2][4])){
            return true;
        }
        if(dp[1][4]==dp[1][2]+dp[2][4] && dp[1][4]==dp[1][3]+dp[3][4] && (dp[1][2]==dp[2][4]) && (dp[2][4]==dp[1][3]) &&(dp[1][3]==dp[3][4])){
            return true;
        }
        if(dp[2][3]==dp[1][2]+dp[1][3] && dp[2][3]==dp[2][4]+dp[3][4] && (dp[1][2]==dp[1][3]) && (dp[1][3]==dp[2][4]) &&(dp[2][4]==dp[3][4])){
            return true;
        }
        if(dp[2][4]==dp[1][2]+dp[1][4] && dp[2][4]==dp[2][3]+dp[3][4] && (dp[1][2]==dp[1][4]) && (dp[1][4]==dp[2][3]) &&(dp[2][3]==dp[3][4])){
            return true;
        }
        if(dp[3][4]==dp[1][3]+dp[1][4] && dp[3][4]==dp[2][3]+dp[2][4] && (dp[1][3]==dp[1][4]) && (dp[1][4]==dp[2][3]) &&(dp[2][3]==dp[2][4])){
            return true;
        }
        return false;
    }
};