//https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1#

Node *removeDuplicates(Node *head)
{
 // your code goes here
    if(!head)
    return NULL;
    Node* ans = head;
    while(head){
        if(head->next&&(head->data==head->next->data))
        head->next=head->next->next;
        else
        head=head->next;
    }
    
    return ans;
}
