vector<int> mod_inv(int n, int m) {
    vector<int> inv(n+1);
    inv[0]=-1;inv[1]=1;
    for(int i=2; i<=n; i++) inv[i]=m-((m/i)*inv[m%i])%m;
    return inv;
}