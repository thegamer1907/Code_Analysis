#include<bits/stdc++.h>
#define fs ios_base::sync_with_stdio (0); cin.tie(0)
#define por(i,a,b) for(i=a;i<b;i++)
#define sf(R) scanf("%I64d",&R)
#define pf(R) printf("%I64d",R)
#define pb(x) push_back(x)
#define ld long double
#define mo 1000000007
#define ll long long
#define S second
#define f first
#define N 100001
#define PI 3.14159265358979323846
using namespace std;



int main(){
    fs;
    ll n,i,j,r,res=0;
    ll t[3],p[3];
    string s;
    cin>>s;
    ll nb=0,ns=0,nc=0;
    por(i,0,s.size()){
        if(s[i]=='B') nb++;
        else if(s[i]=='S') ns++;
        else nc++;
        }

    //cout<<nb<<" "<<ns<<" "<<nc<<endl;
    por(i,0,3) cin>>t[i];
    por(i,0,3) cin>>p[i];
    cin>>r;
    while((t[0] && nb) || (t[1] && ns) || (t[2] && nc)){
        if(t[0]<nb){
            if((nb-t[0])*p[0]<=r){
                r-=(nb-t[0])*p[0];
                t[0]=nb;
            }else{
            cout<<res;
            return 0;
            }
        }
        if(t[1]<ns){
            if((ns-t[1])*p[1]<=r){
                r-=(ns-t[1])*p[1];
                t[1]=ns;
            }else{
            cout<<res;
            return 0;
            }
        }
        if(t[2]<nc){
            if((nc-t[2])*p[2]<=r){
                r-=(nc-t[2])*p[2];
                t[2]=nc;
            }else{
            cout<<res;
            return 0;
            }
        }
        t[0]-=nb;
        t[1]-=ns;
        t[2]-=nc;
        res++;
    }
    res+=r/(nb*p[0]+ns*p[1]+nc*p[2]);
    cout<<res;
return 0;
}
