#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    
	    string s;
	    cin>>s;
	    int n;
	    cin>>n;
	    
	    string ans;
	    int id=0;
	    int t = s[id]-'0';
	    
	    while(t<n){
	        t = t*10 + (s[++id]-'0');
	    }
	    
	    while(s.size()>id ){
	        ans += t/n + '0';
	        
	        t = (t%n) * 10 + s[++id]-'0';
	    }
	    
	    if(ans.length()==0)
	    ans="0";
	    
	    cout<<ans<<endl;
	    
	
	
	
	}
	//code
	return 0;
}
