bool isIdentical(Node *x, Node *y)
{
    //Your Code here
    if (x == NULL && y == NULL)
return 1;
return (x && y) && (x->data == y->data) && isIdentical(x->left, y->left) && isIdentical(x->right, y->right);
}
