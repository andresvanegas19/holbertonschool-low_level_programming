typedef struct SinglyLinkedList SinglyLinkedList;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

/**
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    SinglyLinkedListNode *reversehead = reverse(head->next);
    head->next.next = head;
    head->next = NULL;

    return (reversehead);
}