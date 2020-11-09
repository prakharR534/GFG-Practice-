Node *convertExpression(string str,int i)
{
//add code here.
if(i==str.length())
return NULL;

Node *root=new Node(str[i++]);

if(str[i]=='?')
root->left = convertExpression(str,++i);
else if(str[i]==':')
root->right = convertExpression(str,++i);

return root;
}
