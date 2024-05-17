bool checkPrime(int n) {
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i==0) {
            cnt++;
            
            if(n/i != i) {
                cnt++;
            }
        }
    }
    
    return (cnt==2);
}
