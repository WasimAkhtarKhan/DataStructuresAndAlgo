//https://leetcode.com/contest/weekly-contest-265/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v;
        int i=1;
        int prev=head->val;
        head=head->next;
        if(!head->next)
            return {-1,-1};
        while(head->next){
            if(head->val<head->next->val&&head->val<prev)
                v.push_back(i);
            else if(head->val>head->next->val && head->val>prev)
                v.push_back(i);
            
            prev=head->val;
            head=head->next;
            i++;
        }
        vector<int>arr(2,-1);
        if(v.size()>1)
        arr[1]=v[v.size()-1]-v[0];
        else
        return {-1,-1};
        
        arr[0]=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            arr[0] = min(arr[0],v[i+1]-v[i]);
        }
        
        return arr;
    }
};
