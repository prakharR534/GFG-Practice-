//here i used string class of cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char A[n+1];
        
        string str;

        for(int i=0;i<n;i++){
        cin>>A[i];
        str.push_back(A[i]);
        }
        
        
        cout << str << endl;
        
    }
}
