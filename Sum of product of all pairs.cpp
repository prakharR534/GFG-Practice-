#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,sum=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];
	
	for(int i=0;i<n-1;i++){
	    for(int j=i+1;j<n;j++){
	        sum += (A[i]*A[j]);
	    }
	}
	
	cout<<sum<<endl;
	
	}
	//code
	return 0;
}
