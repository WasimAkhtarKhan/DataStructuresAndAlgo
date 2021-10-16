//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1#


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node* ans=head;
     unordered_set<int>s;
    
     while(head->next){
         s.insert(head->data);
         if(s.find(head->next->data)!=s.end())
             head->next=head->next->next;
         else
            head=head->next;
     }
     return ans;
    }
};
