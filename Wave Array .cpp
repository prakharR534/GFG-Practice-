void convertToWave(int *arr, int n){
    
    // Your code here
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            if(arr[i]<arr[i+1])
            swap(arr[i],arr[i+1]);
        }
        else if(i%2!=0){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
