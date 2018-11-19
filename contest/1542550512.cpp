#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef pair<int,int> pii;
typedef vector<int> vec;

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define scn2(n,m) scanf("%d%d",&n,&m)
#define scn3(n,m,w) scanf("%d%d%d",&n,&m,&w)
#define scn2ll(n,m) scanf("%lld%lld",&n,&m)
#define atoz(v) v.begin(),v.end()
#define Fill(a,v) memset(a,v,sizeof(a))
#define sz(v) v.size()
#define fi first
#define se second
#define inf 1e9
#define pi acos(-1.0)
#define sqr(x) x*x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))


int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

map<int,bool>mip;
int a[5],oka=0;

int doit(int i,int k, int sum){

    if(i==k || mip[sum]){
        return mip[sum];
    }

    for(int ki=i; ki<k; ki++){

        if(a[ki]==0) oka += doit(ki+1,k,sum+(1<<ki)) ||  doit(ki+1,k,sum)  ;

        else oka +=  doit(ki+1,k,sum);

    }
    return oka;
}

int main()
{
    int n,k;
    scn2(n,k);

    for(int i=0; i<n; i++){

        int temp;
        oka=temp=0;

        for(int ki=0,x,two=1; ki<k; ki++){

            scn(x);
            temp += (x*two);
            a[ki]=x;
            two *= 2;
        }
        if(doit(0,k,0) || temp==0){
            cout<<"YES";
            return 0;
        }
        mip[temp]=true;
    }
    cout<<"NO";

    return 0;
}
