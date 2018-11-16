#include<bits/stdc++.h>
#define fast cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);srand(time(NULL));cout<<fixed;cout<<setprecision(15);
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.order_of_key(x);           // gives order of x in the set


#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define minQueue priority_queue<ll,vector<ll>,greater<ll> > 
#define maxQueue priority_queue<ll,vector<ll>,less<ll> > 

#define fill(a,b) memset((a),(b),sizeof((a)))

#define deb1(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;

#define mod 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

ll modulo(ll a, ll b, ll n){
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}

int main()
{
    fast;
    ll n,k;
    cin>>n>>k;
    ll c=0;
    while(n!=k)
    {
        if(k<n)
        {
            k=k+1;
        }
        else if(k%2==0)
        {
            k=k/2;
        }
        else
        {
            k=k+1;
        }
        //deb1(k)
        c++;
    }
    cout<<c;
    return 0;    
}
