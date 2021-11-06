//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list/0

Node* divide(int N, Node *head){
        // code here
        if(!head || !head->next)
        return head;
        
        int fe = 0,fo = 0;
        Node* e = NULL;
        Node* o = NULL;
        Node* ans = NULL;
        Node* of = NULL;
        while(head){
            if(head->data%2==0){
                if(fe==0){
                    fe=1;
                    e=head;
                    ans=e;
                }
                else{
                    e->next=head;
                    e=e->next;
                }
            }
            else{
                if(fo==0){
                    fo=1;
                    o=head;
                    of=o;
                }
                else{
                    o->next=head;
                    o=o->next;
                }
            }
            head=head->next;
        }
        if(ans==NULL)
        return of;
        
        if(of==NULL)
        return ans;
        
        o->next=NULL;
        e->next=of;
        return ans;
    }
