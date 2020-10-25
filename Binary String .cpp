long binarySubstring(int n, string a){
    
    // Your code here
    long c=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1')
        c++;
    }
    
    return c*(c-1)/2;
    
}
