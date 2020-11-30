class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int pigs=0;
        int time=(minutesToTest/minutesToDie)+1;
        while((int)pow(time,pigs)<buckets){
            pigs++;
        }
        return pigs;
    }
};