

//User function Template for C

void toBinary(int B)
{
    int n=0,num=0,i=1;
    // your code here
    while(B !=0){
        n = B%2;
       
        B /=2;
         num += n*i;
         i *=10;
    }
    
    printf("%d",num);
        
}
