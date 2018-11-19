#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define sz(x) ((int)(x).size())
#define EPS 1e-8
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

int n;
string s,a;
bool flag1,flag2;

int main() {
	
	cin >> s >> n;
	
	for(int i=0;i<n;++i) {
		cin >> a;
		if(a==s) return printf("YES"), 0;
		if(a[1]==s[0]) flag1 = 1;
		if(a[0]==s[1]) flag2 = 1;
	}
	
	if(flag1 && flag2) printf("YES");
	else printf("NO");
	
}
