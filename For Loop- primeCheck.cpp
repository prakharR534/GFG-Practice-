// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void isPrime(int n);

 // } Driver Code Ends


//User function Template for C++

//Complete this function
void isPrime(int n)
{
    int c=0;
       if (n==1){cout<<"No";}
else if(n==2||n==3)
{cout<<"Yes";}
else{
    for(int i=2;i<=sqrt(n);i++)
    {
        //Write your logic here
        /*n is prime only if it is not divisible by any i. We will not reach till n and 1 is already discarded*/
        if(n % i == 0){
            c++;
        }
        
       
        
    }
     if(c==0 ) cout<<"Yes";
    else cout<<"No";
}
   
 
   cout<<endl;
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    isPrime(n);
	    
	}
	return 0;
}  // } Driver Code Ends
