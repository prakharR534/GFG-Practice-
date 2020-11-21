class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        vector<string>ans;
        string s1="",s2="",s3="";
        for(int i=0;i<S.length();i++){
            if((S[i]>='a' && S[i]<='z')||(S[i]>='A' && S[i]<='Z'))
            s1.push_back(S[i]);
            else  if(S[i]>='0' && S[i]<='9')
            s2.push_back(S[i]);
            else s3.push_back(S[i]);
        }
        ans.push_back(s1);
        ans.push_back(s2);
        ans.push_back(s3);
        return ans;
    } 
};
