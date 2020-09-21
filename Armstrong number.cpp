// { Driver Code Starts
//Initial Template for C


#include <stdio.h>

 // } Driver Code Ends


//User function Template for C



void check_armstrong(int n)
{
   // your code here
   int sum=0,k=n;
   while(n){
       int a = n%10;
       sum += a*a*a;
       n /= 10;
   }
   
   if(sum == k) 
   printf("yes");
   else
   printf("no");
}

// { Driver Code Starts.
int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	   
	   //char ch[1];
	   // scanf("%s", ch);
	    
	    
	     check_armstrong(n);
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends
