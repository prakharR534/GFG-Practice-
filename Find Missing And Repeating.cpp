#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
 {
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	 int n,tw=0,mi=0;
	    cin>>n;
	    int a[n+1]={0};
	    for(int i=0;i<n;i++)
	    {
	        int x;cin>>x;
	        if(a[x]==n+1)tw=x;
	        else a[x]=n+1;
	    }
	
	for(int i=1;i<=n;i++){
	    if(a[i]!=n+1){
	        mi =i;
	        break;
	    }
	}
	    
	       cout<<tw<<" "<<mi<<endl;
	
	}
	//code
	return 0;
}

     
