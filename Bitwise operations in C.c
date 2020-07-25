// { Driver Code Starts
//Initial Template for C

 // } Driver Code Ends


//User function Template for C

// function to perform bitwise operation
// according to operator
#include<stdio.h>
void bitOperation(int A, int B, char ch)
{
    // your code here
    if(ch == '^')
            printf("%d\n",A^B);
    else 
    if(ch == '&')
              printf("%d\n",A&B);
              else  if(ch == '|')
              printf("%d\n",A|B);
}


// { Driver Code Starts.
#include <stdio.h>
int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int A, B;
	    char ch;
	    scanf("%d %d %c", &A, &B, &ch); // taking two integers and character as an input
	    //char c[1];
	    //scanf("%s", c);
	    bitOperation(A, B, ch);
	     //printf("~\n");
	    
	}
	return 0;
}  // } Driver Code Ends
