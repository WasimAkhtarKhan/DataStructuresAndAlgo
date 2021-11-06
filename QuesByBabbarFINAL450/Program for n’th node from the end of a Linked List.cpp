//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1#

//There is another efficient approach than this
int getNthFromLast(Node *head, int n)
{
       // Your code here
    if(!head)
    return -1;
    
    int count=1;
    Node* curr = head;
    while(curr->next){
        count++;
        curr=curr->next;
    }
    if(n>count)
    return -1;
    
    count = count - n;
    curr = head;
    while(count){
        curr = curr->next;
        count--;
    }
    return curr->data;
}
