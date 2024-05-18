ListNode* convertLL(vector<int> &arr) {
    ListNode *head = new ListNode(arr[0]);
    ListNode *mover = head;
    
    for(int i=1; i<arr.size(); i++) {
        ListNode *temp = new ListNode(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    
    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertLL(arr);
    cout << head -> data;
}
