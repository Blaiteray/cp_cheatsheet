void all_subset(int a[],int n,int k,vector<int> s) {
	if(k==n){
		// process subset
	} 
	else{
		all_subset(a,n,k+1,s);
		s.push_back(a[k]);
		all_subset(a,n,k+1,s);
		s.pop_back();
	}
}