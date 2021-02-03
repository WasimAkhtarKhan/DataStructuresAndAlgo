//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem




// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

DoublyLinkedListNode *temp, *p; p=head;
while(p)
{
    temp=p->next;
    p->next=p->prev;
    p->prev=temp;
    p=p->prev;
    if(p && p->next==NULL)
    head=p;
}
    return head;
}

