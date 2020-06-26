#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,x,k=0;
	    cin>>n>>x;
	    int A[n];
	    for(int i=0;i<n;i++)
	    cin>>A[i];
	    
	        for(int i=0;i<n;i++){
	            if(A[i] >= x){
	                k = i;
	                break;
	            }
	            if(x > A[n-1]){
	                k=n-1;
	            }
	         
	        }
	        
	        if(k>0)
	        cout<<k<<endl;
	        else
	            cout<<"-1\n";
	    
	    
	
	
	
	}
	//code
	return 0;
}
