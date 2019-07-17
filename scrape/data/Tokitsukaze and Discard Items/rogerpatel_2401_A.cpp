#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>
#define ll long long
#define db double
#define str string
#define ch char
#define pb push_back
#define FOR(a,n) for(i=0;i<n;i++){	cin>>a[i];}
#define sortVector(a) sort(a.begin(),a.end())
#define reverseSortVector(a) sort(a.rbegin(),a.rend())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

using namespace std;

ll choose(ll n , ll m){   // (n c k)
	ll ans=0;
	ll num=1;
	ll den=1;
	for(ll i=0;i<m;i++){
		num*=(n-i);
		num=num/(i+1);
	}
	return num;
}

ll isPrime(ll n){
    if(n==0 || n==1)
        return 0;
    if (n%2 == 0)
        return 0;

    if(n%3==0)
        return 0;

    for (ll i=5; i*i<=n; i=i+6)
    {
        if (n%i == 0)
            return 0;
        if (n%(i+2) == 0)
            return 0;
    }
    return n;
}

bool check(vector<ll>a, ll mxelement){
    ll i,j,k;
    for(i=0;i<a.size();i++){
        if(a[i]==mxelement){
            j=i;
            break;
        }
    }
    //cout << " j " << j << " " << mxelement << endl;
    for(i=j+1;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    if(a[a.size()-1]>a[0]){
        return false;
    }
    for(i=0;i<j;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}

ll digits(ll n){
    ll c=0;
    while(n!=0){
        c++;
        n/=10;
    }
    return c;
}

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    } else {
        gcd(b,a%b);
    }
}

int main(){
    ll i,j,k,n,m,t;
    cin>>n>>m>>k;
    vector<ll>p(m);
    for(j=0;j<m;j++){
        cin>>p[j];
    }
    ll lo,hi,mid;
    ll total=0;
    ll zeroes=0;
    ll ans=-1;
    ll left=m;
    ll done=0;
    ll oldk=k;
        i=0;
        ll c=0;
        ll d=0;
        left=(p[0]/k)*k;
        if(left<p[0]){
            left+=k;
        }
        k=left;
        while(i<m){
            if(p[i]-done<=k){
                c++;
                d++;
                i++;
            } else {
                if(c==0){
                    k=((p[i]-done)/oldk)*oldk;
                    if(k<(p[i]-done)){
                        k+=oldk;
                    }
                } else {
                    done+=d;
                    d=0;
                    c=0;
                    total++;
                }
            }
        }
    cout<<total+1<<endl;
    return 0;
}