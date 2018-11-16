#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;
#define loop(i,n)   for(int i=0;i<(int)(n);i++)
#define GCC_go ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define stop system("pause");
#define F first
#define S second
typedef long long ll;
#define fx fixed
#define setp(n) setprecision(n)
#define PI 3.14159
typedef complex<double> point;
typedef pair<point, point> segment;
typedef pair<double, point> circle;
typedef vector<point> polygon;
template <class T>inline void arin(T* st, T* nd) {
    while (st < nd)cin>>*st++;
}

int di[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dj[] = {0, 0, 1, -1, 1, -1, -1, 1};
int diK[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int djK[] = {-1, 1, 2, 2, 1, -1, -2, -2};
bool cmd(pair<pair<int,int>, int>a, pair<pair<int,int>, int>b) {return (a.first.second < b.first.second);}



set<ll>def;
vector<int>y;
int main(){
    
    int n,m;
    cin>>n>>m;
    ll x[n];
    y=vector<int>(n,0);
    loop(i,n)
    cin>>x[i];
    for(int i=n-1;i>=0;i--){
        def.insert(x[i]);
        y[i]=def.size();
    }
    while(m--){
        cin>>n;
        cout<<y[n-1]<<endl;
    }
}