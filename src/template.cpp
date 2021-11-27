#include <bits/stdc++.h>
using namespace std;
#define FASTio ios::sync_with_stdio(false);cin.tie(NULL);
#define DECI fixed<<setprecision(5)

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
// typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_multiset;

typedef long long ll;typedef unsigned long long ull;typedef long double ld;
typedef vector<int> vi;typedef vector<vector<int>> vvi;typedef deque<int> di;
typedef map<int,int> mii;
typedef pair<int,int> pii;typedef tuple<int,int,int> tiii;
typedef priority_queue<int> pqi;typedef priority_queue<int,vector<int>,greater<int>> pqgi;
typedef set<int> si;typedef multiset<int> msi;
#define pb(k) push_back(k)
#define mp(a,b) make_pair(a,b)
#define B begin()
#define E end()
#define F first
#define S second
#define nl cout<<"\n"
/***************Debugging tools are below*****************/
#define LC cout<<"line("<<__LINE__<<") ";
#define DB(x) {static int _ti_=1000;if((_ti_--)>0)cout<<#x<<": "<<x<<"\n";}
#define LB {static int _tx_=0;if(_tx_>=1000) {cout<<"inf loop\n" ;break;}_tx_++;}
#define TA(a) {int* n=(int*)(&a+1);cout<<#a<<": ";for(int* i=a;i!=n;i++) cout<<*i<<" ";nl;}
#define nax 1000000007
/********************************************************/
int main() {
	FASTio
	int t; cin >> t; while(t--) {
		LB
		LC DB(t)
	}
	return 0;
}