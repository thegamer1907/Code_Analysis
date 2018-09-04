/*input
5 4
1 2 3 5
3 1 3 2
4 5 2 3
5 5 3 2
4 4 3 4
6
1 1
2 5
4 5
3 5
1 3
1 5
*/
 #include <iostream>
 #include <vector>
 #include <cmath>
 #include <set>
 #include <queue>
 #include <map>
 #include <cstdio>
 #include <cstring>
 #include <string>
 #include <stack>
 #include <algorithm>
 #include <limits.h>
 #include <bits/stdc++.h>
 #define fw(x) freopen("x.txt","w",stdout)
 #define For(i,a,b,c) for(int i = a;i < b;i+=c)
 #define REP(i,n) for(int i = 0;i < n;++i)
 #define mem(a,s) memset(a,s,sizeof a)
 #define fast ios_base::sync_with_stdio(0)
 #define pf printf
 #define sc scanf
 #define ll long long
 using namespace std;
    
    
    // moves

//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/
 

 //big_mod

//ll bigmod(ll a,ll b,ll m)
//{if(b == 0) return 1%m;ll x = bigmod(a,b/2,m);x = (x * x) % m;if(b % 2 == 1) x = (x * a)% m;return x;}
//ll BigMod(ll B,ll P,ll M){ ll R=1%M; while(P>0) {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;} /// (B^P)%M

const int N = 100020;
ll nx[N],mx[N];
int n,m,k,l,r;

int main()
{
    fast;
    cin>>n>>m;
    ll a[n+5][m+5];

    for (int i = 1; i <= n; ++i)
    {
    	for(int j = 1;j<=m;j++)
    		cin>>a[i][j];
    }

    for(int i=1;i<=m;i++)
    	nx[i] = n;
    mx[n] = n;

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i+1][j]<a[i][j])
                nx[j]=i;
            mx[i]=max(mx[i],nx[j]);
        }
    }
    cin>>k;
    while(k--)
    {
    	cin>>l>>r;
    	if(mx[l]>=r)
    		puts("Yes");
    	else 
    		puts("No");
    }
    return 0;
}