#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long




int main(){
	string b; cin >> b;
	int n; cin >> n;
	string a[n];
	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i ++) if(b == a[i]) return !printf("YES\n");
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			if(a[i][1] == b[0] and a[j][0] == b[1]) return !printf("YES\n");
		}
	}

	printf("NO\n");

}