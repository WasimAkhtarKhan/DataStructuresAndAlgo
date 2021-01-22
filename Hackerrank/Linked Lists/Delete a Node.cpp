//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem




// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
SinglyLinkedListNode* temp_1=head;
if(position==0)
head=temp_1->next;
else
{

for(int i=0;i<position-1;i++)
{
    temp_1=temp_1->next;
}
SinglyLinkedListNode *temp_2;
temp_2=temp_1->next;
temp_1->next=temp_2->next;
delete temp_2;

}
return head;
}

