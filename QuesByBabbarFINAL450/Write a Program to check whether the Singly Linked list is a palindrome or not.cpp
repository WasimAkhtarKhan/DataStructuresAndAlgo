//https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1#

class Solution{
  public:
    //Function to check whether the list is palindrome.
    void reverse(Node* s){
        Node* p = NULL;
        Node* n = NULL;
        while(s){
            n=s->next;
            s->next=p;
            p=s;
            s=n;
        }
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* s = head;
        Node* f = head;
        while(f->next){
            s=s->next;
            f=f->next;
            if(f->next)
            f=f->next;
        }

        reverse(s);
        s=f;
        while(s){
            if(head->data!=s->data)
            return false;
            head=head->next;
            s=s->next;
        }
        return true;
    }
};
