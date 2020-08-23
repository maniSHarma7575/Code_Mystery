void sortA1ByA2(int A1[], int N, int A2[], int M) 
{
    unordered_map<int,int> mp;
    for(int i=0;i<N;i++){
        mp[A1[i]]++;
    }
    int result[N];
    int k=0;
    unordered_map<int,int> up;
    for(int i=0;i<M;i++){
        if(mp.find(A2[i])!=mp.end()){
            for(int j=0;j<mp[A2[i]];j++){
                result[k]=A2[i];
                k++;
            }
        }
        up[A2[i]]=1;
    }
    sort(A1,A1+N);
    for(int i=0;i<N;i++){
        if(up.find(A1[i])==up.end()){
            result[k]=A1[i];
            k++;
        }
    }
    for(int i=0;i<N;i++){
        A1[i]=result[i];
    }
} 