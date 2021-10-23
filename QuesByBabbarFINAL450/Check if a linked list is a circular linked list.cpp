//https://practice.geeksforgeeks.org/problems/circular-linked-list/1

bool isCircular(struct Node *head){
    //code here
    struct Node* t = head;
    while(head->next){
        if(head->next==t)
        return true;
        head=head->next;
    }
    return false;
}
