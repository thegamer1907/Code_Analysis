#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<unordered_map>
#include<map>
#include<cmath>
#include<vector>
#include<iomanip>
#include<queue>
using namespace std;
#define inf 10000003
#define x first
#define y second
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll>
#define pb push_back
#include<set>
#include<cmath>
#include<stack>
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int A[10000005]={0};
bool Prime[10000005]={0};
vi primes, partial;

void sieve()
{
    ll i, j, k=1;
    for(i=2; i<=inf; i++){
        if(Prime[i] == 0){
            primes.pb(i);
            partial.pb(0);
            partial[k] += partial[k-1];
            for(j=i; j<= inf; j += i){
                Prime[j]= 1;
                partial[k] += A[j];
            }
      //      cout<<primes[k]<<" "<<partial[k]<<" ";
            k++;
        }
    }
}

int main()
{
    ios
    ll i, j, k, n;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>k;
        A[k]++;
    }
    partial.pb(0);
    primes.pb(0);
    sieve();
    ll l, r;
    cin>>k;
    for(i=0; i<k; i++){
        cin>>l>>r;
        l= lower_bound(primes.begin(), primes.end(), l)- primes.begin();
        r= upper_bound(primes.begin(), primes.end(), r)- primes.begin()-1;
        cout<<partial[r]-partial[l-1]<<"\n";
    }
}
