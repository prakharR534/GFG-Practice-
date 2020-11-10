#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];
	vector<int>ans;
	
		for(int i=0;i<n-k;i++)
	ans.push_back(A[i+k]);
	
		for(int i=0;i<k;i++)
	ans.push_back(A[i]);
	
	
		for(int i=0;i<n;i++)
	cout<<ans[i]<<" ";
	
	cout<<endl;
	}
	//code
	return 0;
}
