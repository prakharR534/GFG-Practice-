#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	
	int a,b,s=0;
	cin>>a>>b;
	
	for(int i=1;i<=a;i++){
	    for(int j=1;j<=b;j++){
	        s += i*j;
	    }
	}
	
	cout<<s<<endl;
	
	
	}
	//code
	return 0;
}
