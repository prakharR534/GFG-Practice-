#include<iostream>
#define endl "\n"

using namespace std;
//here i used recurssion , for low no constraints thses works for when large number of constraints , we have to use dp for efficent solution

int N_O_P(int m,int n){
    if(m==1 || n==1)
    return 1;
    
    return N_O_P(m-1,n) + N_O_P(m,n-1);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int m,n;
	cin>>m>>n;
	
	cout<<N_O_P(m,n)<<endl;
	
	
	
	}
	//code
	return 0;
}
