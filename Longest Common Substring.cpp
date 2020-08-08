#include<iostream>
using namespace std;

int main()
 {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	int x,y;
	string s1,s2;
	cin>>x>>y>>s1>>s2;
	
	int p,q,r,count=0,max=-1,rem=-1;
	      
	      for(int i=0;i<y;i++){
	          p=i;count=0;rem=-1;
	          for(int j=0;j<x;j++){
	              if(s2[i]==s1[j]&&rem==-1&&count!=0){
	                  rem=j;
	              }
	              if(s2[p]==s1[j]){
	                  count++;
	                  
	                  p++;
	              }
	              else{
	                  if(rem!=-1){
	                  j=rem-1;rem=-1;}
	              count=0;p=i;}
	              if(count>max)
	              max=count;
	          }
	          
	      }cout<<max<<endl;
	}
	return 0;
}
