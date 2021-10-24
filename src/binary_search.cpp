int bin_search(int a[],int n,int x) {
	int l=0,r=n-1;
	while(l<=r){
		int k=(l+r)/2;
		if(a[k]==x){
			return k;
		}
		if(a[k]>x) r=k-1;
		else l=k+1;
	}
	return -1;
}