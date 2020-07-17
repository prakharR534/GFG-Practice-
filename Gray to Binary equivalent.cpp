#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	
	for(int i=1;i<32;i++){
	    n = n ^(n>>1);
	}
	
	cout<<n<<endl;
	
	}
	//code
	return 0;
}
