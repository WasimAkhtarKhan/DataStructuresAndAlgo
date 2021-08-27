//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#
//Try again
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *slow=head;
        Node *fast=head->next;
        
        while(fast)
        {
            slow=slow->next;
            if(fast->next&&fast->next->next)
            fast=fast->next->next;
            else
            break;
            
            if(slow==fast)
            return true;
        }
        return false;
    }
};
