char nonrepeatingCharacter(string S)
{
   //Your code here
   int m[256]={0};
   for(int i=0;i<S.length();i++)
   m[S[i]]++;
   
   for(int i=0;i<S.length();i++){
       if(m[S[i]]==1)
       return S[i];
   }
   
   return '$';
   
}
