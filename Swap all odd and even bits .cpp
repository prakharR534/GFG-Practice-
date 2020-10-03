#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	int x;
	cin>>x;
	
	int even_bits = x & 0xAAAAAAAA;
	int odd_bits = x & 0x55555555;
	int ans;
	
	  even_bits >>= 1;   
    odd_bits <<= 1;
    
    ans = even_bits | odd_bits;
    
    cout<<ans<<endl;
	
	}
	//code
	return 0;
}
