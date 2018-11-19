#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define all(a) a.begin(), a.end()
#define tr(a, it) \
for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define mod 100000007

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h = h + (m/60) + (s/3600);
	if(h >= 12)h -= 12;
	m = m + (s/60);
	if(m >= 60) m-= 60;
	m = m/5;
	if(s >= 60) s-= 60;
	s = s/5;
	bool flag = true;
	double minm = min(t1, t2);
	double maxm = max(t1, t2);
	if(t1 == t2){
		cout << "YES" << endl;
		exit(0);
 	}
 	if((minm<h && maxm>h) || (minm<m && maxm>m) || (minm<s && maxm>s)){
 		flag = false;
	}
	if(flag){
		cout << "YES" << endl;
		exit(0);
	}
	flag = true;
	if((h<minm || h>maxm) || (m<minm || m>maxm) || (s<minm || s>maxm)){
		flag = false;
	} 
	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}