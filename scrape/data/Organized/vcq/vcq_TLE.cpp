#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 300005
ll ans,ji,jian,ye;
struct P{
	double x,y,r;
};
map<pair<int,int>,int>qw;
int s[100005];
int main()
{
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int i,j,k,n,m,nu=0,T,q,w,a,b,c;
	cin>>n>>m>>k;
	for(i=1;i<=m;i++){
		cin>>s[i];
	}
	sort(s+1,s+1+m);
	for(i=1;i<=m;){
		ji=jian;
		ye=s[i]-jian-1-(s[i]-1-jian)%k+k;
		for(;i<=m&&s[i]<=ye+jian;i++){
			ji++;
		}
		jian=ji;
		ans++;
	}
	cout<<ans;
	return 0;

}
/*
4 5 0 0 3
1 2 3 9
4 5 6 7 8
5
0 0 0 0 0
5 1 2 3 4
3p 5m 4l

3p 3p 4p
*/