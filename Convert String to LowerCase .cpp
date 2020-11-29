class Solution {
  public:
    string toLower(string S) {
        // code here
        string ans=S;
        for(int i=0;i<S.length();i++){
            if(ans[i]>'a')
            ans[i]=S[i];
            else
            ans[i]=S[i]+32;
        }
        return ans;
    }
};
