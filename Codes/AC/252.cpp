#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define vi vector<int>
#define vd vector<double>
#define ii pair<int,int>
#define vii vector<ii>
#define hell 1000000007
#define rep(i, a, b) for (int i = a; i<(int)b; i++)
#define fi first
#define se second
#define repd(i, a, b) for (int i = a; i>=(int)b; i--)
#define all(v) v.begin(),v.end()
#define pb push_back
#define foreach(it, c) for (typeof((c).begin()) it = (c).begin(); it!= (c).end(); ++it)
#define in freopen("test.in","rt",stdin)
#define out freopen("test.out","wt",stdout)
#define tl cout<<"\nTime elapsed: "<<(1000 * clock() / CLOCKS_PER_SEC)<<"ms"
#define mp make_pair
#define fi first
#define se second
#define endl "\n"

using namespace std;
ll tab[1000000+9];

int main()
{_
#ifndef ONLINE_JUDGE
    in;
#endif
ll n,a; cin>>n;
ll k=1,l=1;
rep(i,0,n){
cin>>a;
rep(j,l,l+a)tab[j]=k;
++k;l+=a;
}
int m; cin>>m;
rep(i,0,m){
    cin>>a;
    cout<<tab[a]<<endl;
}
return 0;
}
