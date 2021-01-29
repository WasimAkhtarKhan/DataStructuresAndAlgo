//https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem




// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

SinglyLinkedListNode *p; 
p=head; 
while(head->next!=NULL)
 {
     if(head->data!=head->next->data) 
        head=head->next; 
     else
        head->next=head->next->next;
     } 
     return p;
}

