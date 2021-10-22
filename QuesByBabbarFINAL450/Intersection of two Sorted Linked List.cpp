//https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1#

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ans;
    Node* curr=ans;
    int f=1;
    while(head1&&head2){
        if(head1->data<head2->data)
        head1=head1->next;
        else if(head1->data>head2->data)
        head2=head2->next;
        else{
            Node* n = head1;
            if(f==1){
                f=0;
                ans = n;
                curr = ans;
            }
            else{
            curr->next=n;
            curr=curr->next;
            }
            head1=head1->next;
            head2=head2->next;
        }
    }
    return ans;
}
