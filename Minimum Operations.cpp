#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n>0){
	        if(n%2!=0)
	        n-=1;
	        else 
	        n/=2;
	        
	        count++;
	    }
	    cout<<count<<endl;
	
	
	
	}
	//code
	return 0;
}
