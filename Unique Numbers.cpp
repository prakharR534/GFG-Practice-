class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        
        for(int i=L;i<=R;i++){
            int num=i;
            bool v[10]={false};
            
            while(num){
                if(v[num%10])
                break;
                v[num%10]=true;
                num /=10;
            }
            
            if(num==0)
            cout<<i<<" ";
            
        }
    }
};
