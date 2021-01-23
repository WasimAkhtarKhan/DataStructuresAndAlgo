//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem




// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
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
while(head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}
}

