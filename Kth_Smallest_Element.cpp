int KthSmallestELement(vector<int> &arr, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = arr.size();
    
    for(int i=0; i<n; i++) {
        pq.push(arr[i]);
    }
    
    int f = k-1;
    while(f>0) {
        pq.pop();
        f--;
    }
    
    return pq.top();
}
