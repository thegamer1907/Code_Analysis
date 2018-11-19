#include<bits/stdc++.h>

//#define int long long
#define pii pair<int,int>
#define fr first
#define se second
#define ll long long
#define mp make_pair
const int mod=998244353;
const int inf=(int)1e18;

using namespace std;


signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
   	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	int n, k;
	cin >> n >> k;
	vector < vector <int> > vec;
	for(int i = 0; i <n ; ++i){
		int x;
		vector <int> t;
		for(int j = 0; j < k; ++j){
			cin >> x;
			t.push_back(x);
		}
		vec.push_back(t);
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	int sz = vec.size();
	for(int  i = 1; i < (1ll << sz); ++i){
		int cnt[10] = {0};
		for(int j = 0; j < sz; ++j){
			if(i & (1ll << j)){
				for(int m = 0; m < k; ++m){
					cnt[m] += vec[j][m];
		//			cout << vec[j][m] << "*\n";
				}
			}
		}
		int flag = 1, c = __builtin_popcount(i);
		for(int j = 0; j < k; ++j){
		//	cout << cnt[j] << "\n";
			if(cnt[j] > c / 2){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			//cout << i << "\n";
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
	return 0;
}