#include<iostream>
//#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<map>
#include<vector>
#include <iomanip>
#include <set>
#include<cmath>
#define F first
#define S second
#define pii pair<int,int>
#define pb push_back
#define int long long
#define mp make_pair
//setprecision
int inf=1e9+10;
int const MAX=1e5+10;
int const MAX2=1e6+10;
int const MAX3=1e3+10;
int mod=1e9+7;
string a[MAX];
string b[MAX];
int sa(int x,int y){if(x%y==0)return x/y;return x/y+1;}
int binp(int x,int y){int ans=1;int t=x;while(y!=0){if(y%2==1){ans*=t;ans;}y/=2;t*=t;t;}return ans;}
main(){
	ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    int t=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i]==b[j])
                t++;
        }
    }
    int pl;
    if(t%2==0)
        pl=1;
    else
        pl=2;
    if(pl==2)
        m--;
    if(n>m)
        cout<<"YES";
    if(n<=m)
        cout<<"NO";
}