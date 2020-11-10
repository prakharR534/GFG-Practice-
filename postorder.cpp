void po(Node *root,vector<int> &ans){
    if(root==NULL)return;
  po(root->left,ans);
   po(root->right,ans);
   ans.push_back(root->data);
  
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>ans;
  po(root,ans);
  
  return ans;
}
