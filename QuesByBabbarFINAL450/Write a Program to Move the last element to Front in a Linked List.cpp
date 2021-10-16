//https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/

void moveToFront(Node **head_ref)
{
    if(!head_ref||!(*head_ref)->next)
    return;
	Node* f = *head_ref;

    while((*head_ref) ->next->next){
        (*head_ref) = (*head_ref)->next;
    }
    (*head_ref)->next->next=f;
	f = (*head_ref)->next;
	(*head_ref)->next=NULL;
	*head_ref = f;
}
