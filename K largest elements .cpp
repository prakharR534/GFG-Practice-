vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    
    priority_queue<int,vector<int>,greater<int>>q;//min_heap
    
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        if(q.size()>k)
        q.pop();
    }
    
    vector<int>ans;
    while(!q.empty()){
        ans.push_back(q.top());
        q.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
