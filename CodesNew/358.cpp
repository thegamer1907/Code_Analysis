/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const int MAX = 2003;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,t,A,N,tot=0;
    vector<ll> a;
    cin>>n>>t;
    N=n;
    while(N--) {
        cin>>A;
        a.pb(A);
    }
    ll tob=0,maxi=-1;

    for(ll i=n-1; i>=0; --i) {
        tot+=a[i];
        tob+=1;
        while(tot>t) {
            tot-=a[i+tob-1];
            --tob;
        }
        if(maxi<tob) maxi=tob;
    }
    if(maxi==-1) maxi=0;
    cout<<maxi<<el;


    return 0;
}

