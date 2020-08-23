/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *pointer1=head;
    struct ListNode *pointer2=head;
    if(head==NULL)
        return false;
    while(pointer1&&pointer2&&pointer2->next){
        pointer1=pointer1->next;
        pointer2=pointer2->next->next;
        if(pointer1==pointer2)
            return true;
    }
    return false;
}
