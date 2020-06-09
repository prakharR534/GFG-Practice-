#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   long long int a=0,b=1,r=1;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	         cout<<r<<" ";
	         r = a + b;
	        
	        a = b;
	        b = r;
	       
	    }
	    cout<<endl;
	}
	//code
	return 0;
}
