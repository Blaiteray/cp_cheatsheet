struct matrix {
	vector<vector<int>> val;
	matrix(int n) {
		vector<int> temp(n,0);
		for(int i=0;i<n;i++) val.push_back(temp);
	}
	matrix operator+(matrix x) {
		matrix t_matrix(val.size());
		for(int i=0;i<val.size();i++) for(int j=0;j<val.size();j++) {
			t_matrix.val[i][j]=val[i][j]+x.val[i][j];
		}
		return t_matrix;
	}
	matrix operator-(matrix x) {
		matrix t_matrix(val.size());
		for(int i=0;i<val.size();i++) for(int j=0;j<val.size();j++) {
			t_matrix.val[i][j]=val[i][j]-x.val[i][j];
		}
		return t_matrix;
	}
	matrix operator*(matrix x) {
		matrix t_matrix(val.size());
		for(int i=0;i<val.size();i++) for(int j=0;j<val.size();j++) {
			int temp=0;
			for(int k=0;k<val.size();k++) temp+=val[i][k]*(x.val[k][j]);
			t_matrix.val[i][j]=temp;
		}
		return t_matrix;
	}
};