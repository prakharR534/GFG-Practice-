// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

struct area
{
    int sd;
    int len, wid;
    
};


 // } Driver Code Ends


//User function Template for C

/*struct area
{
    int sd;
    int len, wid;
}*/
void find_area(int side, int le, int wd)
{
    // assign value to side of square
    struct area a1;
    // your code here
     a1.sd  = side;
    
    // assign values to length and breadth of rectangle
    // your code here
    a1.len = le;
    a1.wid = wd;
    
    // computing area of square
    // your code here
    int a = a1.sd * a1.sd;
    printf("%d",a);
//    cout<<a;
    
    // computing area of rectangle
    // your code here
    int a2 = le * wd;
    printf(" %d",a2);
    //cout<<" "<<a2<<endl;
}


// { Driver Code Starts.
int main() {
	//code
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int side, length, wide;
	    scanf("%d %d %d", &side, &length, &wide);
	    
	   // char ch[1];
	   // scanf("%s", ch);
	    
	    find_area(side, length, wide);
	    printf("\n");
	    
	}
	return 0;
}  // } Driver Code Ends
