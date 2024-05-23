static void findMin(int v) {
    vector<int> ans;
    vector<int> deno = {1,2,5,10,20,50,100,500,1000};
    int n = deno.size();
    
    for(int i=n-1; i>=0; i--) {
        while(v >= deno[i]) {
            v -= deno[i];
            ans.add(deno[i]);
        }
    }
    
    for(auto &it: ans) {
        cout << it << " ";
    }
}
