// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++
class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        int sum=0,r=0,c=0,a=0;
        
        while(n){
            r = n%2;
            n/=2;
            
            if(c%2==0){
                r=0;
                sum+= r*pow(2,a);
            }
            else
            
            {
                 sum+= r*pow(2,a);
            }
            c++;
            a++
            ;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
