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
	int n, k;
	cin >> n >> k;
	int know[n][k];
	set<int> s;
	for(int i= 0; i<n; i++){
		int num = 0;
		for(int j = 0; j<k; j++){
			cin >> know[i][j];
			if(know[i][j]){
				num = num + (int)pow(2, k-j-1);
			}
		}
		s.insert(num);
		//cout << num << endl;
	}
	if(s.find(0) != s.end()){
		cout << "YES" << endl;
		exit(0);
	}
	set<int>::iterator it, pt;
	bool flag = false;
		for(it = s.begin(); it != s.end(); it++){
			for(pt = s.begin(); pt != s.end(); pt++){
				int here = (*it)&(*pt);
				if((it != pt) && here == 0){
					flag = true;
					break;
				}
			}
			if(flag)break;
	}
	if(flag)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}