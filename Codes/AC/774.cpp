#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define endl '\n'
#define MAX

typedef long long ll;
typedef pair<int,int> pii;
//typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;

bool ok(int x){
	int sum = 0;
	while(x > 0){
		sum += (x % 10);
		x /= 10;
	}
	return sum == 10;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int k;
	cin >> k;
	vector<int> a;
	for(int i = 1; a.size() < k; i++){
		if(ok(i))
			a.push_back(i);
	}
	cout << a[k - 1] << endl;
	return 0;
}

