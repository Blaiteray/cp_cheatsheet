typedef long long ll;

int binpower(int base,int e,int mod) {
    int result=1;
    base%=mod;
    while(e){
        if(e&1)
            result=(ll)result*base%mod;
        base=(ll)base*base%mod;
        e>>=1;
    }
    return result;
}
bool check_composite(int n,int a,int d,int s) {
    int x=binpower(a,d,n);
    if(x==1 || x==n-1) return false;
    for(int r=1;r<s;r++){
        x=(ll)x*x%n;
        if(x ==n-1) return false;
    }
    return true;
};
bool MillerRabin(int n) {
    if (n<2) return false;
    int r=0;
    int d=n-1;
    while((d&1)==0){
        d>>=1;
        r++;
    }
    for(int a:{2,3,5,7}){
        if(n==a) return true;
        if(check_composite(n,a,d,r)) return false;
    }
    return true;
}