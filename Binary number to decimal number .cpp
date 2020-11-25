class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    int n =str.length();
		    int ans=0;
		    for(int i=0;i<n;i++){
		        ans = ans + pow(2,n-i-1)*(str[i]-'0');
		    }
		    
		    return ans;
		}
};
