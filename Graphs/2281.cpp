#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define f first
#define se second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define lp(i,n) for(int i =0;i<n;i++)
#define mem(a,v) memset(a,v,sizeof(a))
#define X real()
#define Y imag()
#define angle(a) (atan2(a.Y , a.X))
#define vec(a,b) ((b)-(a))
//#define length(a) (hypot(a.Y , a.X))
#define normalize(a) (a)/length(a)
#define dotP(a,b) ((conj(a)*b).X)
#define crossP(a,b) ((conj(a)*b).Y)
#define same(p1,p2) (dotP(vec(p1,p2),vec(p1,p2))<EPS)
#define lengthSqr(a)   dotP(a,a)
#define rotate0(p,ang) ((p)*exp(point(0,ang)))
#define rotateA(p,ang,about) (rotate0(vec(about,p),ang)+about)
#define reflect0(v,m) conj(v/m)*m
const double PI = acos(-1.0);
const double EPS = (1e-10);
typedef long long int ll;
typedef unsigned long long ull;
typedef complex<double> point;
int n;
vector<vector<int> > adj(2005);
int v[2005];
int cmax;
void dfs(int ind, int cnt){
    cmax = max(cmax,cnt);
    v[ind] = 1;
    for(int j : adj[ind]){
        if(!v[j]){
            dfs(j,cnt+1);
        }
    }
    v[ind] = 0;
    return;
    
}
int main(){
	
    cin>>n;
    lp(i,n){
        int x ;
        cin>>x;
        if(x==-1)continue;
        adj[x].pb(i+1);
    }
    lp(i,n){
        
        if(!v[i+1])dfs(i+1  ,1);
    }
    cout<<cmax;
    
    return 0;
} 