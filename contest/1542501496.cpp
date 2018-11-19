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
	int hr, mn, se, t1, t2;
	cin >> hr >> mn >> se >> t1 >> t2;
	t1 *= 5;
	t2 *= 5;
	hr *= 5;
	if(t1 == t2){
		cout << "Yes\n";
		return 0;
	}
	if(t1 == 60){
		t1 = 0;
	}
	if(t2 == 60){
		t2 = 0;
	}
	if(t1 > t2){
		swap(t1, t2);
	}
	if(mn != 0 || se != 0){
		hr++;
		if(hr == t1 || hr ==t2){
			hr--;
		}
	}
	if(se != 0){
		mn++;
		if(mn == t1 || mn == t2){
			mn--;
		}
	}
	hr %= 60;
	mn %= 60;
	int c = 3;
	if(se == t1 || se == t2){
		c--;
	}
	if(hr == t1 || hr == t2){
		c--;
	}
	if(mn == t1 || mn == t2){
		c--;
	}
	int cnt = 0;
	cnt += (hr > t1 and hr < t2) + (mn > t1 and mn < t2) + (se > t1 and se < t2);
	if(cnt == 0 || cnt == c){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
	return 0;
}