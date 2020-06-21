// { Driver Code Starts
//Initial Template for C
#include <stdio.h>

 // } Driver Code Ends


//User function Template for C

// Snippet of BubbleSort technique
void bubbleSort(int arr[], int n)
{
    int i, j;
   for (i = 0; i < n-1; i++)      
    {
        for (j = 0; j < n-i-1; j++)
        {
            // your code here
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
           
    }
}

// { Driver Code Starts.

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
     printf("%d ", arr[i]);
}
int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	     scanf("%d", &arr[i]);
	     
	   bubbleSort(arr, n);
	   printArray(arr, n);
	   printf("\n");
	}
	return 0;
}  // } Driver Code Ends
