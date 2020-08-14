struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node *t = head;
    while(t && t->next){
        int o = t->data;
        t->data = t->next->data;
        t->next->data = o;
        t = t->next->next;
    }
return head;
}
