#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>

typedef long long ll;

ll const mod = 1e9+7;

int n,i,j,k,t;
string s;
vector<string>a,b,c;

int main(){
	scanf("%d %d", &n, &k);
	for(i=0;i<n;i++){
		cin>>s;
		a.pb(s);
	}
	for(j=0;j<k;j++){
		cin>>s;
		b.pb(s);
		if(find(a.begin(), a.end(), s)!=a.end())
			c.pb(s);
	}
	if(c.size()&1){
		if(a.size()<b.size())
			puts("NO");
		else
			puts("YES");
	}
	else{
		if(a.size()<=b.size())
			puts("NO");
		else
			puts("YES");
	}
	return 0;
}