void all_permutation(int a[],int n,vector<int> p,int bm[]) {
	if(p.size()==n) {
		// process permutation
	} 
	else {
		for(int i=0;i<n;i++) {
			if(bm[i]) continue;
			bm[i] = true;
			p.push_back(a[i]);
			all_permutation(a,n,p,bm);
			bm[i] = false;
			p.pop_back();
		}
	}
}