#include <bits/stdc++.h>
#define fast std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define read freopen("input.txt","r",stdin);
#define int long long
#define INF 10000000
#define mod 1000000007
#define NIL -1
#define vi vector<int>
#define vit vector<int>::iterator
#define ii pair<int, int>
#define vii vector<ii>
#define mp make_pair
#define pb push_back
#define pii pair < int,pair <int,int> >
#define fi first
#define se second


using namespace std;


int hor[505][505],ver[505][505], dp[505][505];
string a[505];
 main()
{
    fast;
    //read;

    int h, w; cin>>h>>w;
//    vector<string> a(h);
//    for(auto& e: a) cin>>e;
    for(int i=0;i<h;i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<h; ++i) {
        for(int j=0; j<w; ++j) {
            if (a[i][j]!='.') continue;
            if (i>0 and a[i-1][j]=='.') ++ver[i+1][j+1];
            if (j>0 and a[i][j-1]=='.') ++hor[i+1][j+1];
        }
    }
//    cout<<endl;
    for(int i=1; i<=h; ++i) {
        for(int j=1; j<=w; ++j) {
            ver[i][j]+=ver[i-1][j]+ver[i][j-1]-ver[i-1][j-1];
            hor[i][j]+=hor[i-1][j]+hor[i][j-1]-hor[i-1][j-1];
        }
    }

    int q; cin>>q;
    while (q--) {
        int r1, c1, r2, c2; cin>>r1>>c1>>r2>>c2;
        int t=ver[r2][c2]-ver[r2][c1-1]-ver[r1][c2]+ver[r1][c1-1];
        int y=hor[r2][c2]-hor[r2][c1]-hor[r1-1][c2]+hor[r1-1][c1];
        cout<<t+y<<'\n';
    }

    return 0;
}
