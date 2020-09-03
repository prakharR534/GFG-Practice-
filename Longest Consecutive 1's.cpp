int maxConsecutiveOnes(int x)
{
 
    // Your code here
    int count=0;
    while(x){
        x = x&(x<<1);
        count++;
    }
    return count;
    
    
}
