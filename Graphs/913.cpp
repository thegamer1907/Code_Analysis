#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i,n) for (int i=1;i<=n;i++)
#define for1(i, l, r) for(int i = int(l); i < int(r); i++)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pt;
typedef vector <int> vi;

template <class A, class B> ostream& operator << (ostream& out, const pair<A, B> &a) {
	return out << "(" << a.x << ", " << a.y << ")";
}

template <class A> ostream& operator << (ostream& out, const vector<A> &v) {
	out << "[";
	forn(i, sz(v)) {
		if(i) out << ", ";
		out << v[i];
	}
	return out << "]";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t,i,ch=1;

        cin>>n>>t;

        int a[n-1];

        for ( i=1; i<=(n-1); i++) cin>>a[i];

        for  ( i=1; i<=(n-1); )
        {
            i=i+a[i];
            if ( i==t ) { cout<<"YES"<<endl; return 0;}
        }

        cout<<"NO"<<endl;

        return 0;
}
