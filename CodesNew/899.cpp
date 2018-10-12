#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include <limits.h>
using namespace std;
typedef		vector<int>				 vi;
typedef 	vector<vi>				vii;
typedef		pair<int,int>			pii;
typedef		unsigned long long		ull;
typedef		long long				ll ;
typedef 	vector<ll> 				vl ;
typedef 	vector<vl> 				vll;
typedef 	map<string,int>  		msi;
typedef  	map<int,int> 			mii;
typedef 	set<int> 				si ;

#define MOD (int)(1e9+7)
#define rep(i,n)   		for(int i=0; i < n ; i++ )
#define DEBUG(x)		cout << '>' << #x << ':' << x << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
void scan(int &x)
{
    bool neg=false;
    register int c;
    x =0;
    c=getchar();
    if(c=='-')
    {
        neg = true;
        c=getchar();
    }
    for(;(c>47 && c<58);c=getchar())
        x = (x<<1) + (x<<3) +c -48;
    if(neg)
        x *=-1;
}
map<string,int> visited;
int main(){
int n,m;
scan(n);
scan(m);

string poll[n];
string Enemy[m];
rep(i,n)
{
    cin>>poll[i];
    visited[poll[i]]++;
}
int rpeat=0;
rep(i,m)
{


cin>>Enemy[i];
if(visited[Enemy[i]]==1)
    rpeat++;
}
if(rpeat&1)
{
    n++;
}
if(n>m)
    cout<<"YES";
else
    cout<<"NO";


return 0;
}
