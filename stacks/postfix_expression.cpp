
int calculate(int a,int b,char op){
    switch(op){
        case '*':
        return a*b;
        case '-':
        return a-b;
        case '+':
        return a+b;
        case '/':
        return a/b;
    }
}
bool isNumber(char a){
    if((int)a>=48 && (int)a<=57)return true;
    return false;
}
int evaluatePostfix(string &str)
{
    int n=str.length();
    stack<int> s;
    for(int i=0;i<n;i++){
        if(isNumber(str[i])){
            s.push(str[i]-48);
        }
        else{
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            int res=calculate(b,a,str[i]);
            s.push(res);
        }
    }
    return s.top();
}
