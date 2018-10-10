#include<bits/stdc++.h>

using namespace std;

#define MAX
#define endl '\n'

typedef pair<int,int> pii;
typedef long long ll;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	map<string,int> M;
	int same = 0;
	for(int i = 0; i < n; i++){
		string a;
		cin >> a;
		M[a]++;
	}
	for(int i = 0; i < m; i++){
		string a;
		cin >> a;
		M[a]++;
		if(M[a] == 2)same++;
	}
	
	int na = n - same;
	int ma = m - same;
	
	if(same % 2 != 0)na++;
	
	if(na > ma)cout << "YES" << endl;
	else cout << "NO" << endl;
	
	//cerr << na << " " << ma << endl;
	
	
	return 0;
}
