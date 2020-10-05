#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	
	int n;
	cin>>n;
	int c=1;
	
	while(n>c){
	    c +=c;
	}
	
	if(c==n)cout<<"True"<<endl;
	else cout<<"False"<<endl;
	
	}
	//code
	return 0;
}
