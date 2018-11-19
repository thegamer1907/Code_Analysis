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
	char p[3];
	cin >> p;
	int n;
	cin >> n;
	char str[n][3];
	bool flag = false;
	for(int i = 0; i<n; i++){
		cin >> str[i];
		if(strcmp(p, str[i]) == 0){
			flag = true;
		}
	}
	if(!flag){
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(str[i][1] == p[0] && str[j][0] == p[1]){
					flag = true;
					break;
				}
		}
		if(flag)break;
	}	
	}
	if(flag)cout << "YES" << endl;
	else{
		cout << "NO" << endl;
	}
	return 0;
}