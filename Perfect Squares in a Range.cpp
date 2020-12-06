class Solution {
  public:
    int numOfPerfectSquares(int a, int b) {
        // code here
        int c=0;
        for(int i=a;i<=b;i++){
            float x = sqrt(i);
            if(floor(x)==ceil(x))
            c++;
        }
        return c;
    }
};
