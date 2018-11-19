// In the name of God

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define Size(x) ((int)(x).size())
typedef long long ll;
typedef pair<int,int>pii;
typedef long double ld;
const int INF = 1e9 + 10 , MN = 1e5 + 10;

bool mk[33];
int M[MN];
int n , k;

int main(){
	ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	cin >> n >> k;
	for(int i=0;i<n;++i){
		for(int j=0;j<k;++j){
			bool f;cin>>f;
			M[i] |= f * (1<<j);
		}
		if(!mk[M[i]]) mk[M[i]] = true;
	}
	if(mk[0]) return cout << "YES\n" , 0;
	for(int i=0;i<(1<<k);++i)
		for(int j=0;j<(1<<k);++j) if((i&j) == 0){
			if(mk[i] && mk[j]) return cout << "YES\n" , 0;
		}
	cout << "NO\n";
	return 0;
}

