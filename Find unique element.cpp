#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	
	 unordered_map<int,int>m;
	int n,k,f,ans;
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    cin>>f;
	    m[f]++;
	}
	
for(auto x: m)
    {
        if(x.second == 1)
        {
            ans = x.first;
        }
    }
	
	cout<<ans<<endl;
	}
	//code
	return 0;
}
