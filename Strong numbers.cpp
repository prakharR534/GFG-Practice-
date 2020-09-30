// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
  
    int fact(int n){
        if(n==0)return 1;
        else
        return n*fact(n-1);
    }
    
    int isStrong(int N) {
        // code here
        int num = N;
        int d=0,sum=0;
        while(N){
            d = N%10;
            sum += fact(d);
            N /=10;
        }
        
        if(sum == num)return 1;
        else return 0;
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
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
