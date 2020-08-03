#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n+1]={0};
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<n+1;j++)
	        {
	            if(j%i == 0)
	            {   
	                if(a[j] == 0)
	                    a[j]=1;
	                else if(a[j] == 1)
	                    a[j] = 0;
	            }
	        }
	    }
	    for(int i=1;i<n+1;i++)
	        cout<<a[i]<<" ";
        cout<<"\n";
	}
	return 0;
}
