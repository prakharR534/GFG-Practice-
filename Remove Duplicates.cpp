class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    string ans;
	    int A[26]={0};
	    
	    for(int i=0;i<S.length();i++){
	        if(!A[S[i]-97]){
	            A[S[i]-97]++;
	            ans+=S[i];
	        }
	    }
	    return ans;
	}
};
