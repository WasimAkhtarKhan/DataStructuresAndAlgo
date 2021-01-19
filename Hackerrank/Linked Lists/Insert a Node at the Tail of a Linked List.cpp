//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem




// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
node->data = data;
node->next = NULL;

if(head == NULL){
    head = node;
}

else{
    SinglyLinkedListNode* temp;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

return head;

}

