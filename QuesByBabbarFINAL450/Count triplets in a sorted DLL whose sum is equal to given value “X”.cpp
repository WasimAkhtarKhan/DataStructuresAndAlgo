//https://www.geeksforgeeks.org/count-triplets-sorted-doubly-linked-list-whose-sum-equal-given-value-x/

// C++ implementation to count triplets in a sorted doubly linked list
// whose sum is equal to a given value 'x'
#include <bits/stdc++.h>

using namespace std;

// structure of node of doubly linked list
struct Node {
	int data;
	struct Node* next, *prev;
};

// function to count triplets in a sorted doubly linked list
// whose sum is equal to a given value 'x'
int countTriplets(struct Node* head, int x)
{
	int count=0;
    Node* A = head;
    Node* B = head->next;
    Node* C = head;
    while(C->next)
    C=C->next;

    while(B!=C){
        int sum = A->data + B->data + C->data;
        if(sum==x){
            count++;
            C=C->prev;
        }
        else if(sum>x){
            C = C->prev;
            A = head;
            B = head->next;
        }
        else{
            if(A->next!=B)
            A = A->next;
            else
            B = B->next;
        }
    }
    return count;
}

// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node** head, int data)
{
	// allocate node
	struct Node* temp = new Node();

	// put in the data
	temp->data = data;
	temp->next = temp->prev = NULL;

	if ((*head) == NULL)
		(*head) = temp;
	else {
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

// Driver program to test above
int main()
{
	// start with an empty doubly linked list
	struct Node* head = NULL;

	// insert values in sorted order
	insert(&head, 9);
	insert(&head, 8);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);

	int x = 15;

	cout << "Count = "
		<< countTriplets(head, x);
	return 0;
}
