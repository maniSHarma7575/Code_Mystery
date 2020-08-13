vector <long long> nextLargerElement(long long arr[], int n){
    vector<long long> res(n);
    stack<long long> s;
    s.push(0);
    for(int i=1;i<n;i++){
        if(s.empty()){
            s.push(i);
            continue;
        }
        while(!s.empty() && arr[s.top()]<arr[i]){
            res[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(s.empty()==false){
        res[s.top()]=-1;
        s.pop();
    }
    return res;
    // Your code here
}