//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1#

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head->next==NULL)
        return head;
        
        if(head->next->next==NULL)
        {
            Node *sec=head->next;
            Node *f=head;
            f->next=NULL;
            sec->next=f;
            return sec;
        }
        
        Node *curr=head->next;
        Node *f=curr->next;
        Node *f1=curr->next;
        Node *prev=head;
        prev->next=NULL;
        while(f)
        {
            curr->next=prev;
            f1=f1->next;
            f->next=curr;
            prev=curr;
            curr=f;
            f=f1;
        }
        return curr;
    }
    
};
