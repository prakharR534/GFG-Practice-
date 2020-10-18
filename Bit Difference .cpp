#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
		
	int a,b,c=0;
	cin>>a>>b;
	int n=a^b;
	while(n){
	    if(n%2)
	    c++;
	    n/=2;
	}
	
	cout<<c<<endl;
	
	
	}
	//code
	return 0;
}
 
