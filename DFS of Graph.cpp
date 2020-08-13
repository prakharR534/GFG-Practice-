vector<int>dfs(vector<int> g[], int N){
    vector<int> a;
    vector<bool> b(N);
    
    stack<int>s;
    if(N)s.push(0);
    
    while(s.size()){
        int x = s.top();
        s.pop();
        if(b[x])
        continue;
        
        a.push_back(x);
        b[x] = 1;
        
        for(int i= g[x].size()-1;i>=0;i--){
            if(!b[g[x][i]])
            s.push(g[x][i]);
        }
    }
    return a;
}
