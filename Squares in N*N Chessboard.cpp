#include<iostream>
using namespace std;
int main()
 {

	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int result=0;
	    result = (n*(n+1)*(2*n + 1)/6);
	    cout<<result<<"\n";
	}
	return 0;
}
