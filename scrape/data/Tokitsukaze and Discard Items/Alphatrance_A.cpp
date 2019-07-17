/*input
100 4 5
3 5 7 100

*/

#include <bits/stdc++.h>
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>




#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define vpll vector < pair<long long,long long> >
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define fill(a)  memset(a, 0, sizeof (a))
#define mp make_pair
#define pb push_back
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pdd pair<double, double>
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define forstl(i,v) for(auto &i: v)
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x,y) cout<<#x<<" = "<<x<<" & "<<#y<<" = "<<y<<endl;
#define dbgstl(v) cout<<#v<<" = \n"; { int c=0; forstl(it,v) \
cout<<"    "<<#v<<"["<< ++c <<"] = "<<it<<endl;} cerr<<endl
#define dbgstlp(v) cout<<#v<<" = \n"; { int c=0; forstl(it,v) \
cout<<"    "<<#v<<"["<< ++c <<"] = "<<it.f<<" , "<<it.s<<endl;} cerr<<endl
#define PI           3.14159265358979323846

#define rep(i, n)    for(i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define pdd pair<double, double>
#define in(v,n) vll v(n);rep(i,n) cin>>v[i]


using namespace std;


int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cin.exceptions(cin.failbit);
    int T;
	// cout<<std::fixed<<std::setprecision(35);
	// cin>>T;while(T--)
	{
		ll t,n,i,j,x,y,m,l,d,k;
		cin>>n>>m>>k;
		in(v,m);
		rep(i,m){
			v[i]--;
		}
		// dbgstl(v);
		ll tot = 0;
		ll en = ((v[0]/k)*k) + k;
		ll hat = 0;
		i=0;
		while(i<m){
			tot++;
			// cout<<endl<<tot<<endl;
			hat =0;
			while(i<m&&v[i]<en){
				// cout<<v[i]<<" ";
				i++;
				hat++;
			}
			if(i==m) break;
			if(hat!=0){

				en += hat;
				continue;
			}
			if(hat==0){
				tot--;
				ll diff = v[i] - en;
				diff /= k;
				diff ++;
				en += diff*k;
			}
			// dbg(en);
		}

		cout<<tot;
	}
}