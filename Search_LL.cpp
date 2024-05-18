int main() {
    Node *temp = head;
    while(temp) {
        if(temp -> data == val) {
            return 1;
        }
        temp = temp -> next;
    }
    return 0;
}
