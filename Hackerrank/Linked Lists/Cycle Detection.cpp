//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem




// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
if(head==NULL)
return 0;
SinglyLinkedListNode* temp,*p;
p=head;
temp=head;
head=head->next;
while(head!=NULL)
{
    temp=p;
    while(temp!=head)
    {
        if(temp->next==head->next)
        return 1;
        temp=temp->next;
    }
    head=head->next;
}
return 0;
}

