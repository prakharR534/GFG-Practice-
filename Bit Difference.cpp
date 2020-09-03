int countBitsFlip(int a, int b){
    

    //return __builtin_popcount(a^b);
    int count=0;
    int c = a^b;
    while(c){
        c = c&(c-1);
        count++;
    }
    return count;
}
