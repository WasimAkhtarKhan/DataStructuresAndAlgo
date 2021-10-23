//https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1#

// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    Node* merge(Node* m1,Node* m2){
        struct Node* result = NULL;
        if(m1==NULL)
        return m2;
        if(m2==NULL)
        return m1;
        
        if(m1->data<m2->data){
            result = m1;
            result->next = merge(m1->next,m2);
        }
        else{
            result = m2;
            result->next = merge(m1,m2->next);
        }
        
        return result;
    }
    
    /*
    Node* mergeList(struct Node* a, struct Node* b) {
        struct Node* result = NULL;

        if (a == NULL)
            return (b);
        else if (b == NULL)
            return (a);

        if (a->data <= b->data) {
            result = a;
            result->next = mergeList(a->next, b);
        } else {
            result = b;
            result->next = mergeList(a, b->next);
        }
        return (result);
    }
    */
    
    Node* mergeSort(Node* head){
        // your code here
        if(head==NULL||head->next==NULL)
        return head;
        
        Node* s1 = head;
        Node* h1=head;
        Node* h2 = head;
        while(h2->next){
            if(h2->next->next)
            h2=h2->next->next;
            else
            break;
            
            if(h2==NULL)
            break;
            h1=h1->next;
        }
        Node* s2 = h1->next;
        h1->next=NULL;
        Node* m1=mergeSort(s1);
        Node* m2=mergeSort(s2);
        Node* m=merge(m1,m2);
        return m;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends
