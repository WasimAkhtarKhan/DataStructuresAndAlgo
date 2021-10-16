//https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#

Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* c = head;
        Node* t = head;
        while(t){
            if(t->data!=9)
            c = t;
            t=t->next;
        }
        if(c==head&&head->data==9){
            //all 9
            Node* f = new Node(1);
            f->next = head;
            while(head){
                head->data=0;
                head=head->next;
            }
            return f;
        }
        else{
            c->data++;
            while(c->next){
                c->next->data=0;
                c=c->next;
            }
        }
        return head;
    }
