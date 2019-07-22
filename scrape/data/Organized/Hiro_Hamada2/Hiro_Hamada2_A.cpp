#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,rem;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>m>>k;

    for(ll i=1;i<=m;i++){
        cin>>A[i];
    }
    rem=(A[1]-1-sum)/k;

    for(ll i=1;i<=m;i++){
        a=(A[i]-1-sum)/k;
        if(a==rem)cntr++;
        else {cnt++;sum+=cntr;cntr=0;i--;rem=(A[i+1]-1-sum)/k;continue;}
        //cout<<a<<" "<<sum<<endl;
        rem=a;
        //cout<<rem<< " rem "<<cnt<<endl;
    }

    cout<<cnt+1<<endl;

    return 0;
}