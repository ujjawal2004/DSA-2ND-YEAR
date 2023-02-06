SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    //iterate to the correct position in the linked list
    if((position-1)>0){
        insertNodeAtPosition(llist->next, data, position-1);
    }
    else{
        SinglyLinkedListNode* newnode = create_singly_linked_list_node(data);
        newnode->next = llist->next;
        llist->next = newnode;
    }
    return llist;
}
