class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0){
            return 1;
        }
        int count=(int)log2(N)+1;
        int integer=pow(2,count)-1;
        return N^integer;
    }
};