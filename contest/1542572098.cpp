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
#define error(x) cout<<#x<<"="<<(x)<<endl;
void sp(double y,int x){cout<<fixed<<setprecision(x)<<y;}
int inf=1e9+10;
int const M=2e5+10;
int const M2=1e6+10;
int const M3=1e3+10;
int mod=1e9+7;
string x[M];
int mark[M];
int sa(int x,int y){if(x%y==0)return x/y;return x/y+1;}
int binp(int x,int y){int ans=1;int t=x;while(y!=0){if(y%2==1){ans*=t;ans;}y/=2;t*=t;t;}return ans;}
main(){
	ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
	int h,m,s,a,b;
	cin>>h>>m>>s>>a>>b;
	swap(a,b);
	h*=5;
	//mark[h]=1;
	a*=5,b*=5;
	if(m==0)
        m=60;
    if(s==0)
        s=60;
    if(s==60)
        mark[m]=1;
    else
        mark[m]=2;
    mark[s]=1;
    if(s==60 && m==60)
        mark[h]=1;
    else
        mark[h]=2;
	int tmpb=b;
	while(b!=a)
    {
        if(mark[b]==2 && b==tmpb)
            break;
        b++;
       // cerr<<b<<" ";
        if(b==61)
            b=1;
        if(mark[b] && b!=a){
            break;
        }
       // if(mark[b]==2)
        if(b==a)
            return cout<<"YES",0;
    }
    b=tmpb;
    while(b!=a)
    {
        b--;
     //   cerr<<b<<" ";
        if(b==0)
            b=60;
        if(mark[b] && b!=a)
            break;
        if(mark[b]==2)
            break;
        //if(mark[b] && b!=tmpb)
          //  break;
        if(a==b)
            return cout<<"YES",0;
    }
    cout<<"NO";
}