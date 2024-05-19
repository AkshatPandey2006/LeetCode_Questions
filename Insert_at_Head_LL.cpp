//insert at head
Node *insertHead(Node *head, int val) {
    Node *temp = new Node(val,head);
    return temp;
}
