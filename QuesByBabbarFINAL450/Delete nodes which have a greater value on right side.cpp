//https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1#


//Efficient Approach: O(n)
class Solution
{
    public:
    void reverse(Node* &head){
        Node* p = NULL;
        Node* c = head;
        
        while(c){
            Node* n = c->next;
            c->next=p;
            p=c;
            c=n;
        }
        head=p;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        if(!head || !head->next)
        return head;
        
        reverse(head);
        
        Node* curr = head;
        Node* n = curr->next;
        curr->next=NULL;
        Node* temp;
        while(n){
            temp = n;
            while(temp && temp->data<curr->data)
            temp=temp->next;
            if(temp){
                n = temp->next;
                temp->next = curr;
                curr = temp;
            }
            else
            break;
        }
        return curr;
    }
};


//Solution: O(n*n)
Node *compute(Node *head)
    {
        // your code goes here
        Node* ans = head;
        Node* curr = head;
        while(curr){
            if(curr->data>ans->data)
            ans=curr;
            curr=curr->next;
        }
        curr=ans;
        while(curr->next){
            Node* t = curr->next;
            Node* m = t;
            while(t){
                if(t->data>m->data)
                m=t;
                t=t->next;
            }
            curr->next=m;
            curr=m;
        }
        return ans;
    }
