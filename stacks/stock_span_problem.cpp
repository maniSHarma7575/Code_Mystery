vector <int> calculateSpan(int price[], int n)
{
   stack<int> s;
   s.push(0);
   vector<int> S(n);
   S[0]=1;
   for(int i=1;i<n;i++){
       while(!s.empty() && price[s.top()]<=price[i])
       s.pop();
       
       S[i]=s.empty()?(i+1):(i-s.top());
       s.push(i);
   }
   return S;
}