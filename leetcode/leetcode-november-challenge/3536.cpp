class Solution {
public:
    string convert(vector<string> s){
        string nums=s[1];
        string con=s[0];
        int n=stoi(nums);
        string res="";
        for(int i=1;i<=n;i++){
            res+=con;
        }
        return res;
    }
    string decodeString(string s) {
        stack<vector<string>> st;
        st.push({"","1"});
        string nums="";
        string result="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='['){
                st.push({"",nums});
                nums=""; 
            }
            else if(s[i]==']'){
                auto it=st.top();
                st.pop();
                result=convert(it);
                auto it1=st.top();
                st.pop();
                it1[0]+=result;
                st.push(it1);
            }
            else if(s[i]>='0' && s[i]<='9'){
                nums+=s[i];
            }else{
                auto it=st.top();
                st.pop();
                it[0]+=s[i];
                st.push(it);
            }
        }
        result=convert(st.top());
        return result;
    }
};