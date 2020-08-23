/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *pointer1=head;
    struct ListNode *pointer2=head;
    int f=0;
    if(head==NULL)
        return NULL;
    while(pointer1&&pointer2&&pointer2->next){
        pointer1=pointer1->next;
        pointer2=pointer2->next->next;
        if(pointer1==pointer2)
        {
            pointer1=head;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        return NULL;
    }
    while(pointer1!=pointer2){
         pointer1=pointer1->next;
        pointer2=pointer2->next;
    }
   return pointer1;
}
