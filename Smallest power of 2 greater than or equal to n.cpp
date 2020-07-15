#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,count=0;
	cin>>n;
	
	while(n){
	    count++;
	    n /= 2;
	}
	
	int result = pow(2,count);
	cout<<result<<endl;
	
	
	}
	//code
	return 0;
}
