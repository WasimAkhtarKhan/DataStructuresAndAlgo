//https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1#

Node* reverseDLL(Node * head)
{
    //Your code here
 if(head->next==NULL)
 return head;
 Node* p=head;
 head=head->next;
 
 while(head){
     swap(p->prev,p->next);
     p=head;
     head=head->next;
 }
 swap(p->prev,p->next);
 return p;
}
