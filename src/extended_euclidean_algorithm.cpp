int gcd(int a,int b,int& x,int& y){
    if (b==0){
        x=1;
        y=0;
        return a;
    }
    int u,v;
    int d=gcd(b,a%b,u,v);
    x=v;
    y=u-v*(a/b);
    return d;
}