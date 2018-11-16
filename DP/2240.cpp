#include <bits/stdc++.h>

#include <x86intrin.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T1, typename T2> using ordered_map = tree<T1, T2, std::less<T1>, rb_tree_tag, tree_order_statistics_node_update>;

#define in insert

int a[1000000],n,m, ot[1000000];
ordered_set <int> S;

int main (){
	cin >> n >> m;
	for (int i = 0 ;i < n; i++){
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--){
		S.in(a[i]);
		ot[i + 1] = S.size();
	}
	for (int i =0 ;i < m; i++){
		int x;
		cin >> x;
		cout << ot[x] << endl;
	}
	return 0;
}