class Solution
{
	public:
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	int ans=arr[0];
    	for(int i=1;i<N;i++){
    	    ans = __gcd(arr[i],ans);
    	}
    	return ans;
    }
};
