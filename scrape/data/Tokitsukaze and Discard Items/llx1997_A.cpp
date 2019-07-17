#include <bits/stdc++.h>
typedef long long ll;
#define P pair<int,int>
#define sc(x) scanf("%d",&(x))
#define scL(x) scanf("%d",&(x))
#define first fi
#define second se
#define endl '\n'
#define db(x) cout<<endl<<x<<endl;
#define deb cout<<"2233"<<endl;
using namespace std;
#define maxn 100005
ll A[maxn];

#define pb push_back
#define F(i,a,b) for(int i=a;i<b;i++)

#define ini int n;scanf("%d",&n);
#define iti int t;scanf("%d",&t);

#define whilet while(t--)
#define input(A) for(int i=1;i<=m;i++)scanf("%I64d",&A[i]);

int main()
{
    ll n,m,k;
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    input(A);
    ll ans=0;
    sort(A+1,A+1+m);
    ll j=1;
    ll cnt=0,cnt1=0;
    for(int i=1;i<=m;){
        cnt1=0;
        while(A[i]-cnt<=j*k){
            cnt1++;
            i++;
            if(i>m)break;
        }
        cnt+=cnt1;



        if(cnt1==0){
            j=(A[i]-cnt)/k;
            if(A[i]-cnt>j*k)j++;
        }
        else{
            ans++;
        }
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}