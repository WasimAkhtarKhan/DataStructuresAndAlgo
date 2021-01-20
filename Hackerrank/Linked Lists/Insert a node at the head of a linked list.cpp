//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem




// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
  //llist is the pointer

 if(llist==NULL) 
 {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    node->data=data;
    node->next=llist; 
    return node;
 }
 else
 {
     SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
     SinglyLinkedListNode *temp;
     temp=node;
     temp->data=data;
     temp->next=llist;
     //=NULL;
     
    return node;
 }
return 0;
}

