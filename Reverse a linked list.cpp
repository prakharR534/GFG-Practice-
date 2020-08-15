// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node *p = NULL;
    Node *c = head;
    Node *n = NULL;
    
    while(c != NULL){
        n = c->next;
        c->next = p;
        p = c;
        c = n;
            }
    head = p;
    return head;
}
