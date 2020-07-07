#include <iostream>
using namespace std;

 int main()
 {  
     int t,n,i;
     cin>>t;
while(t--){
cin>>n;
int a[10];
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}  





cout<<endl; } return 0; }
