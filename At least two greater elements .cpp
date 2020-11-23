#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];
	
	int f=INT_MIN,s=INT_MIN;
	sort(A,A+n);
	for(int i=0;i<n;i++){
	    if(A[i]>f){
	        s=f;
	        f=A[i];
	    }
	    else if(A[i]>s){
	        s=A[i];
	    }
	}
	
	for(int i=0;i<n;i++){
	    if(A[i]<s)
	    cout<<A[i]<<" ";
	}
	
	cout<<endl;
	
	
	
	
	
	}
	//code
	return 0;
}
