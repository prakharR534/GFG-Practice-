#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){int n;
	cin>>n;
	int A[n];
	int h = n/2,a=0,b=0,mul;
	
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	
	for(int i=0;i<h;i++){
	    a += A[i];
	}
	for(int i=h;i<n;i++){
	    b += A[i];
	}
	
	cout<<a*b<<endl;
	
	
	
	}
	//code
	return 0;
}
