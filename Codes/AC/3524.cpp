#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <cstring>
#include <stack>
using namespace std;
typedef long long ll;
const int maxn = 100005;
#define forn(i,n) for(int i = 0;i<n;i++)
#define for1(i,n) for(int i = 1;i<=n;i++)

vector<int > e[maxn];
int p[400005];
const int  maxx = 10005;

int a[maxn];
ll n;


int judge(ll k){
    ll num1=0,num2=0;
    ll tot = n;
    int flg = 0;
    while(tot!=0){
        if(!flg){
            num1+=min(k,tot);
            tot -= min(k,tot);
            flg = 1;
        }
        else{
            if(tot<10){
                flg = 0;
                continue;
            }
            else{
                num2 += tot/10;
                tot -= tot/10;
                flg = 0;
            }
        }
    }
    //cout<<k<<": "<<num1<<" "<<num2<<endl;
    if(num1>=num2) return 1;
    else return 0;
}
int main(){
    cin>>n;
    ll l = 0;
    ll r = n+1/2;
    if(n<=10)
    {
        cout<<1;
        return 0;
    }
    while(l!=r-1){
        ll m = (l+r)/2;
        if(judge(m)){
            r = m;
        }
        else l = m;

    }
    cout<<r<<endl;




}