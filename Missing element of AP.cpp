#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	  int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
    cin>> a[i];
    sum+=a[i];
     }
	  int real_sum = (n+1)*(a[0]+a[n-1])/2;
    cout << real_sum-sum << endl;
	
	}
	return 0;
}
