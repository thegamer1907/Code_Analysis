#include<bits/stdc++.h>
 
using namespace std;
 
#define int long long int
 
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))
#define rep1(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) rep1(i, 0, n)
#define str(n) scanf("%s",n)
#define sc(n) scanf("%d",&n)
#define sout(n) printf("%s\n",n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);

main() {
    string sr;
    cin>>sr;
    int l =sr.size();
    int s=0,b=0,c=0;
    rep(i,l){
        if(sr[i]=='S')
            s++;
        if(sr[i]=='B')
            b++;
        if(sr[i]=='C')
            c++;
    }
    int ns,nb,nc,ps,pb,pc;
    sll(nb);sll(ns);sll(nc);
    sll(pb);sll(ps);sll(pc);
    int r;
    sll(r);
    int cost = (b*pb)+(c*pc)+(s*ps);
    int ans=0;
    if(b==0)nb=0;
    if(c==0)nc=0;
    if(s==0)ns=0;
    while(nb!=0 || ns!=0 || nc!=0){
        int rem = 0;
        if(ns>=s){
            ns-=s;
        }
        else{
            rem+=(s-ns)*ps;
            ns=0;
        }
        if(nb>=b){
            nb-=b;
        }
        else{
            rem+=(b-nb)*pb;
            nb=0;
        }

        if(nc>=c){
            nc-=c;
        }
        else{
            rem+=(c-nc)*pc;
            nc=0;
        }
        if(rem>r){
            lldout(ans);
            return 0;
        }
        ans++;
        r-=rem;
    }
    lldout(ans+(r/cost));
	// your code goes here
	return 0;
}
