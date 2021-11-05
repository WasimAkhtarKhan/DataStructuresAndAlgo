//https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1#


//My Solution in O(n*n)
class Solution
{
    public:
    Node *copyList(Node *head)
    {
        if(!head)
        return NULL;
        Node* ans = new Node(head->data);
        Node* curr = ans;
        
        Node* h = head;
        
        while(h->next){
            curr->next = new Node(h->next->data);
            curr=curr->next;
            h=h->next;
        }

        curr = ans;
        h = head;

        while(h){
            if(h->arb){
                Node* n = h->arb;
                Node* p = head;
                Node* t = ans;
                while(p!=n){
                    p=p->next;
                    t=t->next;
                }
                curr->arb = t;
            }
            curr=curr->next;
            h=h->next;
        }
        return ans;
    }
};
