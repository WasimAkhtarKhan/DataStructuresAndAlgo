//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem




// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

SinglyLinkedListNode *prev;
SinglyLinkedListNode *nex;
SinglyLinkedListNode *curr;
nex=head->next;
curr=head;
prev=NULL;
while(nex!=NULL)
{
    curr->next=prev;
    prev=curr;
    curr=nex;
    nex=nex->next;
}
curr->next=prev;
head=curr;

return head;
}

