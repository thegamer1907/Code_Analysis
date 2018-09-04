//Template

//By Anik :)

#include <bits/stdc++.h>
using namespace std;

#define   f(i,n) 					for(int i=0;i<(n);i++)
#define   ff(i,n) 					for(int i=1;i<=(n);i++)
#define   m0(X) 					memset((X), 0, sizeof((X)))
#define   m1(X) 					memset((X), -1, sizeof((X)))
#define   pb(x) 					push_back(x)
#define   F     					first
#define   S  						second
#define   mp 						make_pair
//#define   inf                       1LL<<60LL

typedef long long ll;

int rd(int &x){ return scanf("%d",&x);}
int rd(int &x,int &y){ return scanf("%d %d",&x,&y);}
int rd(int &x,int &y,int &z){return scanf("%d %d %d",&x,&y,&z);}
int rd(int &x,int &y,int &z,int &s){return scanf("%d %d %d %d",&x,&y,&z,&s);}

#define debug(args...) { cerr<<__LINE__<<":: ";dbg,args; cerr<<endl;}
struct debugger { template<class T> debugger& operator,(const T& v) { cerr<<v<<" "; return *this; } } dbg ;
template <typename T> void debugv (vector <T> vec) {cerr<<"printing vector:: ";f(i,vec.size()){cout<<vec[i]<<" ";}cerr<<endl;}
template <typename T> void debugs (set <T> s){cerr<<"printing set:: ";for(auto it=s.begin();it!=s.end();it++){cout<<(*it)<<" ";}cerr<<endl;}

const int N=1e7+12;
int lp[N];
long long cnt[N];
bool isPrime (int n) { return lp[n]==0 && n!=1;}

void sieve (int M)
{
    for(int i=2, sz=sqrt(M)+1; i<=sz ; i++){
        if(!lp[i]){
            for(int j=i*i ; j<=M ; j+=i){
                if(!lp[j]) lp[j]=i;
            }
        }
    }
}

vector <int> primeList (int upto)
{
    vector <int> vec;
    for(int i=2; i<=upto; i++){
        if(isPrime(i)) vec.pb(i);
    }
    return vec;
}

vector <int> factorization (int n, bool isDuplicate=1)
{
    int pre=-1;
    vector <int> vec;
    while (lp[n]!=0){
        if(lp[n]!=pre) vec.pb(lp[n]);
        if(isDuplicate) pre=lp[n];
        n /= lp[n];
    }
    if(n!=pre) vec.pb(n);
    return vec;
}

int main()
{
    sieve(1e7+2);
    int n, q;
    rd(n);
    ff(i,n)
    {
        int x;
        rd(x);
        vector <int> vec = factorization(x);
        int sz=vec.size();
        f(w,sz)
        {
            cnt[vec[w]]++;
        }
    }
    ff(i,N-3) cnt[i] += cnt[i-1];

    rd(q);
    ff(i,q)
    {
        int l, r;
        rd(l,r);
        l=min(l,N-6), r=min(r,N-5);
        printf("%lld\n",cnt[r]-cnt[l-1]);
    }


    return 0;
}
















