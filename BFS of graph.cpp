
vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    vector<bool>visited(N,false);
    int s=0;
    visited[0] = true;//init node mareked as visited true
    
    
    vector<int>result;
    queue<int>q;
    q.push(s); //push the source in queue
    while(!q.empty()){
        int t = q.front();
        result.push_back(t);
        q.pop();
        
        for(int v:g[t]){
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
            }
        }
    }
    return result;
    
}
