#include<iostream>
#include<climits> 
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];
	
	
	//algorithm
	int max_sofar=INT_MIN,max_end=0;
	for(int i=0;i<n;i++){
	    
	    max_end += A[i];
	    if(max_sofar < max_end)
	    max_sofar = max_end;
	    
	    if(max_end < 0)
	    max_end=0;
	}
	
	cout<<max_sofar<<endl;
	
	}
	//code
	return 0;
}
