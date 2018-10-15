#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for(ll i = (x); i <= (y); ++i)
#define bug1(a) cout << #a << " = " << a << endl;
#define bug2(a,b) cout << #a << " = " << a <<", "<< #b << " = " << b<< endl;
#define bug3(a,b,c) cout << #a << " = " << a <<", "<< #b << " = " << b<<", "<< #c << " = " << c<< endl;
#define fbug(a, x, y) { cout << #a << ": "; rep(i, x, y) cout << a[i] << ' '; cout << endl; }
#define pb push_back
//#define mp make_pair
#define endd "\n"
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define input freopen("inp.txt","r",stdin)
#define output freopen("out2.txt","w",stdout)
#define loop(i,n) for(ll i=0;i<n;i++)
#define rloop(i,n) for(ll i=n-1;i>=0;i--)
#define ll long long
#define Z size()
#define pii pair<int,int>
#define setp(x) fixed<<setprecision(x)
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pi 3.14159265358979323846264338327950288419716939937510
#define mset(x) memset(x,0,sizeof x);
#define spa cout<<endd
#define com(x)#x
//#define modexp
#define inf 2000
#define rcd(x) cout<<"Reached at: "<<x<<endd
#ifdef modexp


ll power(ll a , ll b,ll modi)
{
    ll res = 1 ;
    while(b)
    {
        if(b%2) {
            res = (res * a) % modi ;
        }
        b/=2 ;
        a = (a*a) % modi ;
    }
    return res ;
}
#endif
int dirx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int diry[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//*******************************TEMPLATE ENDS HERE *******************//
int t;
vector<string>v;
int main(){
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        v.pb(s);
    }
    ll cnt = 0;
    rloop(i, v.Z){
        if(!i)break;
        int j = i - 1;
        int k = 0, l = 0, ck = 0;
        while(k < v[j].Z && l < v[i].Z){
            if(v[j][k] > v[i][l]){
                //cnt += v[j].Z - k;
                v[j].erase(v[j].begin() + k, v[j].end());
                break;
            }
            else if (v[j][k] < v[i][l]){ck = 1; break;}
            k++, l++;
        }
        if(v[i].Z == 1 && k < v[j].Z){
            //cnt += v[j].Z - k;
            v[j].erase(v[j].begin() + k, v[j].end());
        }
        if(l == v[i].Z && k < v[j].Z){
             v[j].erase(v[j].begin() + k, v[j].end());

        }


    }
    //cout<<cnt;spa;
    loop(i, v.Z){
        cout<<v[i];spa;
    }
}