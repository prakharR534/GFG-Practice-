#include<iostream>
using namespace std;
long long int fact(int n)
{
if(n==0)
return 1;
return n*fact(n-1);
}
long long int nPr(int n,int r)
{
return fact(n)/fact(n-r);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,r;
	cin>>n>>r;
	cout<<nPr(n,r)<<endl;
	
	
	}
	//code
	return 0;
}
