#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int n1 = n;
	int count=0;
	
	while(n>0){
	    int d = n%10;
	    if(d!=0)
	    if(n1 % d ==0)
	    count++;
	    n/=10;
	}
	
	cout<<count<<endl;
	
	}
	//code
	return 0;
}
