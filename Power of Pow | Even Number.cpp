#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int sum=0;
	    
	    for(int i=0;i<=n;i++ ){
	        sum += pow(2*i,2);
	        
	    }
	    
	    
	    cout<<sum<<endl;
	}
	
	//code
	return 0;
}
