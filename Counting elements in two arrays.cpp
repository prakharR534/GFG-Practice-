vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
//Your code goes here
vector<int> v;
sort(arr2,arr2+n);

for(int i=0;i<m;i++){
    int e = arr1[i];
    
    int s=0,l=n-1,ans=-1;
    while(s<=l){
        int mid = (s+l)/2;
        if(arr2[mid]<=e){
            ans = mid;
            s = mid+1;
        }
        else if(arr2[mid]>e){
            l = mid-1;
        } else
        s = mid+1;
           }
    v.push_back(ans+1);
    }
return v;
}
