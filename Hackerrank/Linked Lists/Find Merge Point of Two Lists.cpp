//https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem




// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

SinglyLinkedListNode* head3=head1;
while(head2!=NULL)
{
    head1=head3;
    while(head1!=NULL)
    {
        if(head1==head2)
        {
            return head1->data;
        }
        head1=head1->next;
    }
    head2=head2->next;
}
return 0;
}

