class Solution {
  public:
    string revStr(string S) {
        // code here
         string ans=S;
         int n=S.length();
        for(int i=0;i<n;i++){
            
            ans[i]=S[n-1-i];
        }
        return ans;
    }
};
