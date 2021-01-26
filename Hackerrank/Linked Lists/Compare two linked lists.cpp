//https://www.hackerrank.com/challenges/compare-two-linked-lists/problem




// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

int j=1;
while(head1!=NULL&&head2!=NULL)
{
    if(head1->data==head2->data)
    {
        head1=head1->next;
        head2=head2->next;
    }
    else
    {
        j=0;
        break;
    }

}
if((head1!=NULL&&head2==NULL)||(head2!=NULL&&head1==NULL))
j=0;

return j;
}

