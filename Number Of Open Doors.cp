#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	long n;
	cin>>n;
	
	cout<<floor(sqrt(n))<<endl;
	
	
	}
	//code
	return 0;
}


//Only perfect squares have an odd number of factors.This is because a*b=n. For any number a there is a corresponding number b which is also a factor hence factors will make pairs always.But when it is perfect square then a*a=n where a is sqrt(n).Due to of presence of this single factor whose pair is itself will make total number of factors odd. Hence only perfect square will have odd number of factors.
