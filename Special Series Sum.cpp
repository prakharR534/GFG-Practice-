#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,sum=0;
	cin>>n;
	for(int i=n;i>0;i--){
	    
	    for(int j=i;j>0;j--){
	        sum += j;
	    }
	}
	
	cout<<sum<<endl;
	
	}
	//code
	return 0;
}
