// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>

 // } Driver Code Ends


//User function Template for C

void take_string(int n)
{
    // your code here
    char s[50];
    scanf("%s",&s);

for(int i=0;i<n;i=i+2)
printf("%c",s[i]);

for(int i=1;i<n;i=i+2)
printf("%c",s[i]);
}

// { Driver Code Starts

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    take_string(n);
	    
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends
