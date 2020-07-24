// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n)
{
//Your code here
int num;
int count = 1;
int fnum = 0;
//
while(n>0){
    num = n%10;
    if(num == 0)
    num =5;
    
    fnum += num*count;
    
    count *=10;
    n /=10;
}
return fnum;
}
