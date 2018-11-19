#include<iostream>
#include<utility>
#include<cstdio>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<cassert>
#include <string>
#include <vector>
#include <math.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sz(v) (in((v).size()))
#define forn(i,n) for(ll i=0;i<(n);++i)
#define forv(i,v) forn(i,sz(v))
#define fork(n,m) for( ll i=n;i<=m;++i)
#define fors(i,s) for(auto i=(s).begin();i!=(s).end();++i)
#define all(v) (v).begin(),(v).end()
#define sini(n) scanf("%I64d", &n)
#define coti(n) printf("%I64d", n)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
typedef vector<ll> VI;
typedef vector<VI> VVI;
typedef pair<int,int> PI;


const long double pi = 3.14159265359;
const ll MAXN = 1e6+9;
const ll mdl=1000000007LL;
int fac(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans*=i;
    }
    return ans;
}

int main() {
    int a,b,c[1000],d=0,ans=0,sum=0,mx=0,mn=0,e=0;
	vector<string>v,v1;
	string s,s1,s2,s3;
	cin>>s>>a;
	s3 = s;
	reverse(s3.begin(),s3.end());
	for(int i=0;i<a;i++){
        cin>>s1;
        if(s1==s || s1==s3){
            ans++;
            sum++;
        }
        else if(s1[0]==s[1]){
            ans++;
        }
        else if(s1[1]==s[0]){
            sum++;
        }
	}
	if(sum!=0 &&  ans!=0){
        cout<<"YES";
        return 0;
	}
	cout<<"NO";
	return 0;
}



