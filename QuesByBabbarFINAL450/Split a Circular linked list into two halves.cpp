//https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1#

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    *head1_ref = head;
    Node* fast = head;
    Node* slow = head;
    Node* prev;
    while(fast->next->next!=head&&fast->next!=head){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    *head2_ref = slow->next;
    slow->next = head;
    if(fast->next==head)
    fast->next = *head2_ref;
    else
    fast->next->next = *head2_ref;
}
