// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
  int fact(int n){
      if(n==0)
      return 1;
      return n*fact(n-1);
   
  }
    string isKrishnamurthy(int N) {
        // code here
        int n=N,r,sum=0;
        while(n){
            r = n%10;
            sum += fact(r);
            n/=10;
        }
        
        if(sum==N)
        return "YES";
        else 
        return "NO";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
