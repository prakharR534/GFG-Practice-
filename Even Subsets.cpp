// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// Function prototype
int countSumSubsets(int[], int);


 // } Driver Code Ends


//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
int countSumSubsets(int arr[], int N){
    
    // Your code here
 
int count=0;
for(int i=0;i<N;i++){
    if(arr[i] %2 ==0)
    count++;
}
if(count==N)
return pow(2,N)-1;
else
return pow(2,N-1)-1;
    
}

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    
	    cout << countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
