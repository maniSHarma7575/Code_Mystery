bool compare(char a,char b){
    switch(b){
        case '}':
        return a=='{';
        case ']':
        return a=='[';
        case ')':
        return a=='(';
    }
}
bool ispar(string x)
{
   int n=x.length();
   stack<char> s;
   for(int i=0;i<n;i++){
       if(x[i]=='{' || x[i]=='[' || x[i]=='('){
           s.push(x[i]);
       }
       else{
           if(s.empty())return false;
           if(!compare(s.top(),x[i])){
               return false;
           }
           else{
               s.pop();
           }
       }
   }
   if(s.empty())return true;
   else return false;
}