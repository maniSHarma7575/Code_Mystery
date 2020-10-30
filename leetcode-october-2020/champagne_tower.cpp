class Solution {
public:
    
    double champagneTower(int poured, int query_row, int query_glass) {
        double flow[100][100] = {0};
        flow[0][0] = poured;
        for (int i = 0; i < query_row; i++) {
            for (int j = 0; j <= i; j++) {
                auto down = (flow[i][j] - 1.0) / 2.0;
                if (down > 0) {
                    flow[i + 1][j] += down;
                    flow[i + 1][j + 1] += down;
                }
            }
        }
        return min(1.0, flow[query_row][query_glass]);
    }
};