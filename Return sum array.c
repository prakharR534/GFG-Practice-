// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends


//User function Template for C

int* sumArray(int *arr1, int *arr2, int n)
{
    // your code here
    
    int *arr = (int)malloc(n*sizeof(int));
for(int i=0;i<n;i++) 
arr[i]= arr1[i]+arr2[i];

return  arr;

}

// { Driver Code Starts.
int main() {

	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int arr1[n], arr2[n];
	    for(int i = 0; i < n; i++)
	      scanf("%d", &arr1[i]);
	    for(int i = 0; i < n; i++)
	      scanf("%d", &arr2[i]);

	     int *res;
	     res = (int*)malloc(n*sizeof(int));
	     
	     res = sumArray(arr1, arr2, n);
	     for(int i = 0; i <n; i++)
	       printf("%d ", res[i]);
	     free(res);
	     printf("\n");
	    
	}
	return 0;
}  // } Driver Code Ends
