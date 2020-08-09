int height(Node* root)
{
   // Your code here
    if(root == NULL)
   return 0;
  int l = height(root->left)+1;
  int r = height(root->right)+1;
   
   if(l>r)
   return l;
   else
   return r;
}
