DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
struct DoublyLinkedListNode *prev,*curr,*next;
    curr=head;
    prev=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        curr->prev=next;
        if(next==NULL)break;
        prev=curr;curr=next;
    }
    curr->prev=NULL;return curr;

}

