// { Driver Code Starts
//Initial Template for C

 // } Driver Code Ends


//User function Template for C

// function to converge 1 or 0
// according to number is positive or negative
void convergesToOneZero(int n)
{
    // your code here
    if(n>0){
        for(int i=n-1;i>0;i--){
            printf("%d ",i);
        }
    }
    else{
        for(int i=n;i<=0;i++){
            printf("%d ",i);
        }
    }
}

// { Driver Code Starts.
#include <stdio.h>

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int N;
	    scanf("%d", &N); // taking input integer N

	    convergesToOneZero(N);
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends
