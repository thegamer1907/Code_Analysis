//Sinhov
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define prec(x) fixed<<setprecision(x)
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    ll n,x,y,k,flag,m,i,g, a, b, c, val = 0,h, t, f, q, l, r,  y1, j, x1, e, x0, x2, y2, w, p, v, d, u, num;
    ll s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)
        h=0;
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    vector<ll>arr(12*3600,0);
    arr[(12*60*s)%(12*3600)]=1;
    arr[(12*60*m+12*s)%(12*3600)]=1;
    arr[(3600*h+60*m+s)%(12*3600)]=1;
    flag=0;
    t1*=3600;
    t2*=3600;
    i=t1;
    while(true){
        if(arr[i]) {
            flag = 0;
            break;
        }
        if(i==t2){
            flag=1;
            break;
        }
        i++;
        if(i==12*3600)
            i=0;
    }
    i=t1;
    while(true){
        if(arr[i]) {
            break;
        }
        if(i==t2){
            flag=1;
            break;
        }
        i--;
        if(i==-1)
            i=12*3600-1;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}