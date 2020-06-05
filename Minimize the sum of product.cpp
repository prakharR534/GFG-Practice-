#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//cout<<"hey! there i am ready";
	//code
	int t;
	cin>>t;
	  
	while(t--){
	    int n;
	    long long int sum=0;
	    cin>>n;
	    int A[n],B[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	     for(int i=0;i<n;i++){
	        cin>>B[i];
	    }
	    
	    sort(A,A+n);
	    sort(B,B+n);
	    
	  
	    
	     for(int i=0;i<n;i++){
	       sum = sum + A[i]*B[n-i-1];
	    }
	    
	    cout<<sum<<endl;
	    
	}
		return 0;
}
