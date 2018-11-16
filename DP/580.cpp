#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<iomanip>

typedef long long int ll;
typedef unsigned long long int ull;

#define boost ios_base ::sync_with_stdio(0); cin.tie(0);
#define m_p make_pair
#define mod 1000000007
#define pi 3.14159265358979323846
#define mp make_pair
#define ff first
#define ss second
#define sol(i,a,b) for(ll i=a;i<b;i++)
#define rsol(i,a) for(ll i=a;i>=0;i--)
#define sp cout<<endl
#define pb push_back

using namespace std;

int main(){

    boost;

    string s;cin>>s;
    ll n=s.length();
    ll a[n+1]={0};
    a[0]=0;
    for(ll i=0;i<n-1;i++){

        if(s[i]==s[i+1]) a[i+1]=1;
        a[i+1]=a[i+1]+a[i];

    }
    a[n]=a[n-1];

    ll q,l,r;cin>>q;
    while(q--){

        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }

}
