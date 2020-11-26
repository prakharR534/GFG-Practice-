
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
             int res = 0; 
    for (int i=0; i<K; i++) 
       res += arr[i]; 
  
        
        
      int curr_sum = res; 
    for (int i=K; i<N; i++) 
    { 
       curr_sum += arr[i] - arr[i-K]; 
       res = max(res, curr_sum); 
    } 
  
        return res;
    }
};
