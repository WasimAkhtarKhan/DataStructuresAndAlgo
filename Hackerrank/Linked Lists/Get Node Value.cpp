//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem





// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
SinglyLinkedListNode* temp=head;
int t;
temp->data=head->data;
t=temp->data;
int p=positionFromTail;

while(p)
{
    head=head->next;
    p--;
}
while(head!=NULL)
{
    head=head->next;
    t=temp->data;
    temp=temp->next;
     
}

return t;
}

