#include <bits/stdc++.h>

typedef long long int ll;
typedef long long unsigned llu;
typedef long double ld;

#define ct      cout<<
#define ne      <<endl
#define spp     <<' '<<
#define sp      <<' '

#define h(x)        ct "Code Come Here = " << x++ ne;
#define max3(a,b,c) max(a,max(b,c)) 
#define f(i,n)    for(int i=1;i<=n;i++)
#define fi(i,n)   for(int i=n;i>=1;i--)
#define FOR(s,it)   for(it=s.begin();it!=s.end();it++)
#define mem(a,n)  memset(a,n,sizeof(a))
#define all(v)    (v).begin(),(v).end()
#define sc(n)     scanf("%lld",&n)
#define sc2(a,b)  scanf("%lld%lld",&a,&b)
#define sc3(a,b,c)  scanf("%lld%lld%lld",&a,&b,&c)
#define _pb     push_back
#define mp      make_pair
#define ar(a,n)   (a)+1,(a)+(n)+1

const int N=2e6+5;
const ll Nb=12345689012345678;
const ld pi = 3.141592653589793;
const ll md = 1000000007;

using namespace std;

int here=1;

void io(bool ok){
    freopen("input.txt","r",stdin);
    if(ok)
    freopen("output.txt","w",stdout);
}

int main(){

//	io(true);

	string ps;
	cin >> ps;
	
	int n;
	scanf("%d", &n);

	bool f1,f2;
	f1=f2=false;

	f(i,n){
		string temp;
		cin >> temp;
		if(ps[0]==temp[1]) f1=true;
		if(ps[1]==temp[0]) f2=true;
		if(ps==temp) f1=f2=true;
	}

	if(f1&&f2) printf("YES");
	else printf("NO");
	return 0;

}	