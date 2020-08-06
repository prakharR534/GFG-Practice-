#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	string s;cin>>s;
	if(s[0] >='a' && s[0]<='z')
transform(s.begin(), s.end(), s.begin(), ::tolower);
	if(s[0] >='A' && s[0]<='Z')
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	
	cout<<s<<endl;
	
	}
	//code
	return 0;
}
