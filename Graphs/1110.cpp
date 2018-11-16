#include <bits\stdc++.h>

using namespace std;

#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define loop(n) FOR(i,n)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define ll long long
#define length(x) int((x).size())
#define DBG(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i,t) for (auto i = t.begin(); i != t.end(); ++i)
#define fi first
#define se second
#define INFp 1000 * 1000 * 1000
#define INFn -1000 * 1000 * 1000


int main()
{
    int n,t,a[30007];
    cin>>n>>t;

    for (int j=0; j<n-1; j++)
        cin>>a[j];

    int i=1;
    while(i<t)
        i+=a[i-1];
    if (i==t)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
