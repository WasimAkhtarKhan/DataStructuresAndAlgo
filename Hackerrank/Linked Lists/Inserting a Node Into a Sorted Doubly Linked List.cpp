//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem





// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* new_node = new DoublyLinkedListNode(data);

    if (head->data > data) {
        new_node->next = head;
        head->prev = new_node;
        return new_node;
    }

    DoublyLinkedListNode* tmp_node = head;

    auto add_before = [&]() {
        new_node->prev = tmp_node->prev;
        tmp_node->prev->next = new_node;
        new_node->next = tmp_node;
        tmp_node->prev = new_node;
    };

    while(tmp_node->next) {
        if (tmp_node->data > data) {
            add_before();
            return head;
        }
        tmp_node = tmp_node->next;
    }

    if (tmp_node->data > data) {
        add_before();
        return head;
    }

    new_node->prev = tmp_node;
    tmp_node->next = new_node;

    return head;
}


