//delete particular element
Node *removeK(Node *head, int k) {
    if(head == NULL) return head;
    if(k==1) {
        Node *temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    
    int count = 0;
    Node *temp = head;
    Node *prev = NULL;
    
    while(temp != NULL) {
        count++;
        if(count == k) {
            prev -> next = prev -> next -> next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}
