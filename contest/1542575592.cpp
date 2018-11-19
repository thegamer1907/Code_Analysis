#include <bits/stdc++.h>

using namespace std;

#define ok printf("ok\n");
#define pf printf
#define sc scanf
#define br printf("\n")

#define scs(a) scanf("%s",a)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define sc3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sc1l(a) scanf("%lld",&a)
#define sc2l(a,b) scanf("%lld %lld",&a,&b)
#define sc3l(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define sc1d(a) scanf("%lf",&a)
#define sc2d(a,b) scanf("%lf %lf",&a,&b)
#define sc3d(a,b,c) scanf("%lf %lf %lf",&a,&b,&c)
#define pfs(a) printf("%s",a)
#define pf1(a) printf("%d",a)
#define pf2(a,b) printf("%d %d",a,b)
#define pf1l(a) printf("%lld",a)
#define pf2l(a,b) printf("%lld %lld",a,b)
#define pf1d(a) printf("%lf",a)
#define pf2d(a,b) printf("%lf %lf",a,b)

#define pii pair<int,int>
#define pll pair<long long,long long>
#define mp make_pair
#define F first
#define S second
#define pb push_back

#define mem0(a) memset(a,0,sizeof(a))
#define mem1(a) memset(a,-1,sizeof(a))

#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)

long long inline gcd(long long x,long long y){return !y?(long long)abs(x):gcd(y,x%y);}  //returns always positive gcd
long long inline lcm(long long a,long long b){return ((long long)abs((a/gcd(a,b))*b));} //returns always positive lcm
double inline cartesian_dist(double x1,double y1,double x2,double y2){return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}

long long bigmod(long long b,long long p,long long m){              //for both positive and negative base
    if(!p)return 1%m;
    else if(p&1)return (((b%m)+m)%m*bigmod(b,p-1,m))%m;
    else {long long ret=bigmod(b,p/2,m);return (ret*ret)%m;}
}
// inverse will exist if and only if gcd(a,m) is 1
long long inverse(long long a,long long m){return bigmod(a,m-2,m);}  //if Mod is prime
long long extended(long long a,long long m){
    long long oldr=a,r=m,oldans=1,ans=0,quotient;
    while(r){
        quotient=oldr/r;
        oldr=oldr-r*quotient;
        swap(oldr,r);
        oldans=oldans-ans*quotient;
        swap(oldans,ans);
    }
    return ((oldans%m)+m)%m;
}

//template<class t1,class t2>  bool checkBit(t1 &mask,t2 i){return mask&((t1)1<<i);}
//template<class t1,class t2>  void setBit(t1 &mask,t2 i){mask=mask|((t1)1<<i);}
//template<class t1,class t2>  void resetBit(t1 &mask,t2 i){mask=mask&~((t1)1<<i);}


typedef long long ll;
const double PI=acos(-1.0);
const double eps=10E-12;

const long long MOD=101LL;
const long long inf=5*(ll)1e18+5;

string s,word;
int n;
vector<string>vec;


int main(){
    cin>>s;
    sc1(n);
    for(int i=0;i<n;i++){
        cin>>word;
        if(s==word){
            pf("YES\n");
            return 0;
        }
        vec.pb(word);
        vec.pb(word);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(j==i)continue;
            if(vec[i][1]==s[0] && vec[j][0]==s[1]){
                pf("YES\n");
                return 0;
            }
        }
    }
    pf("NO\n");

    return 0;
}