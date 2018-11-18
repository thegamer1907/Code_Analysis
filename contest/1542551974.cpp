#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define fre     freopen("in.txt","r",stdin);freopen("0.out","w",stdout)
#define abs(x) ((x)>0?(x):-(x))
#define rep(i,start,lim) for(ll i=start;i<lim;i++)
#define repr(i,start,lim) for(ll i=start;i>=lim;i--)
#define scan(x) scanf("%lld",&x)
#define print(x) printf("%lld ",x)
#define br printf("\n")
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pll pair<ll,ll>
#define all(c) (c).begin(),(c).end()
#define INF       1000111000111000111LL
#define EPS         (double)1e-10
#define MOD         1000000007
#define PI          3.14159265358979323
#define F first
#define S second
#define endl '\n'
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long double ld;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll i,j,k,t,res=0,sum=0,n;
    ll h,m,s,t1,t2,a=0,b=0;
    cin>>h>>m>>s>>t1>>t2;
    if(t2<t1)swap(t1,t2);
    /*if(t2>t1){
        i=t2-t1;
        j=12-i;
    }
    else{
        j=t1-t2;
        i=12-t;
    }*/
    if(h>t1&&h<t2){
        a++;
    }
    else if(h==t1){
        a++;
    }
    else{
        b++;
    }
    t1*=5;
    t2*=5;
    if(t1==60){t1=0;swap(t1,t2);swap(a,b);}
    else if(t2==60){t2=0;swap(t1,t2);swap(a,b);}
    //if(t2<t1)swap(t1,t2);
    if(m>t1&&m<t2){
        a++;
    }
    else if(m==t1){
        a++;
    }
    else{
        b++;
    }
    if(s>t1&&s<t2){
        a++;
    }
    else if(s==t1){
        a++;
    }
    else{b++;}
    if(a==0||b==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
