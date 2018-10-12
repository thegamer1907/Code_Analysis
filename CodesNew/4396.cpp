
#include <bits/stdc++.h>

#define forn(i,n) for(int i = 0; i < (int)(n); ++i)
#define for1(i,n) for(int i = 1; i <= (int)(n); ++i)
#define fore(i,l,r) for(int i = (int)(l); i <= (int)(r); ++i)
#define ford(i,n) for(int i = (int)(n)-1; i >= 0; --i)
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

using namespace std;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<vi> vvi;
typedef vector<vlli> vvlli;
typedef long double ld;

string a[500001];
void solve()
{
    int n;
    cin>>n;

    forn(i,n) cin>>a[i];

    for(int i=n-2;i>=0;i--){
    	int j;
    	for(j=0;j<a[i].size() && j<a[i+1].size() && a[i][j]==a[i+1][j];j++);
    	if((j==a[i+1].size() &&  j<a[i].size()) || a[i][j]>a[i+1][j])
    		a[i].resize(j);
    }

    forn(i,n) cout<<a[i]<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout<<fixed;
    
    int T=1;
    //cin>>T;
    while(T--)
    {
	solve();
    }
    
    return 0;
}
