class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> mp;
        int count=0;
        for(auto it:words){
            string res="";
            for(int i=0;i<it.length();i++){
                res+=morse[(int)it[i]-97];
            }
            if(mp.find(res)==mp.end()){
                mp[res]=1;
                count+=1;
            }
        }
        return count;
    }
};