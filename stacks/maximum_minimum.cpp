vector <int> printMaxOfMin(int arr[], int N) {
    int n=N;
    stack<int> s;
    int left[N+1];
    int right[N+1];
    for(int i=0;i<n;i++){
        left[i]=-1;
        right[i]=N;
    }
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]>=arr[i])
        s.pop();
        if(!s.empty())
            left[i]=s.top();
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }
    for (int i = n-1 ; i>=0 ; i-- ) 
    { 
        while (!s.empty() && arr[s.top()] >= arr[i]) 
            s.pop(); 
  
        if(!s.empty()) 
            right[i] = s.top(); 
  
        s.push(i); 
    }
    vector<int> ans(n+1);
    for(int i=0;i<n;i++){
        ans[i]=0;
    }
     for (int i=0; i<n; i++) 
    { 
        int len = right[i] - left[i] - 1; 
        ans[len] = max(ans[len], arr[i]); 
    }
    for (int i=n-1; i>=1; i--) 
        ans[i] = max(ans[i], ans[i+1]);
    vector<int> res(n);
    for(int i=0;i<n;i++){
        res[i]=ans[i+1];
    }
    return res;
    
}