#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    int l=0,r=n-1;
	    while(r>l){
	        if(s[l] != s[r]){
	            flag=1;
	            cout<<"No\n";
	            break;
	        }
	        r--;
	        l++;
	    }
	    if(flag==0)
printf("Yes\n");
	
	
	
	}
	//code
	return 0;
	}
