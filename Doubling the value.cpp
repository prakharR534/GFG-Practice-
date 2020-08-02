#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   long long	int n,b;
    	cin>>n>>b;
    	long long int A[n];
    	for(int i=0;i<n;i++)
        cin>> A[i];
        
        sort(A,A+n);
        for(int i=0;i<n;i++){
        if(A[i] == b){
            b *=2;
        }
    }
    
    cout<<b<<endl;

}
}
