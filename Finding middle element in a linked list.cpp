int getMiddle(Node *head)
{
   // Your code here
   int count=0,n;
   Node *t = head;
   
   while(t->next != NULL){
       t = t->next;
       count++;
   }
   //now i have count
   if(count%2==0) n=count/2 ;
   else n = count/2 + 1;
   
   Node *t1 = head;
   for(int i=0;i<n;i++){
       t1 = t1->next;
   }
   return t1->data;
}
