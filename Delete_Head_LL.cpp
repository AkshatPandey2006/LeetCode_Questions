//delete head
Node *removeHead(Node *head) {
    if(head == NULL) return head;
    Node *temp = head;
    head = head -> next;
    delete temp;
    return head;
}
