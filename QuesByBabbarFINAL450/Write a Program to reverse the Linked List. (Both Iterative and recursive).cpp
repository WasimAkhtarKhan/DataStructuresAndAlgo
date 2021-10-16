//https://leetcode.com/problems/reverse-linked-list/submissions/
//https://www.geeksforgeeks.org/reverse-a-linked-list/

//Iterative Method
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        ListNode* p = NULL;
        ListNode* f = head->next;
        while(f){
            head->next=p;
            p=head;
            head=f;
            f=f->next;
        }
        head->next=p;
        return head;
    }
};




//RECURSIVE METHOD
class Solution {
public:
    void solve(ListNode* head,ListNode* p,ListNode* &ans){
        if(head->next==NULL){
            head->next=p;
            ans=head;
            return;
        }
        solve(head->next,head,ans);
        head->next=p;
    }
    
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        ListNode* p = NULL;
        ListNode* ans = head;
        solve(head,p,ans);
        return ans;
    }
};
