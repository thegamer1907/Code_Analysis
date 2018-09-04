#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define MX 100100


int ara[MX];

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cin>>ara[i];
	}

	int mn=1e9;
	
	for(int i=1; i<=n; i++){
		mn = min(mn, ara[i]/n);
	}
	
	for(int i=1; i<=n; i++){
		ara[i] -= (mn*n);
	}
	int offset=0;
	for(int i=1; i<=n; i++){
		if(ara[i]-offset-(i-1)<=0) {
			cout<<i<<endl;
			return 0;
			}
		if(i==n) {
			i=0;
			offset+=n;
			}
			}



    return 0;
}


