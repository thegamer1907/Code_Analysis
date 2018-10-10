#include <bits/stdc++.h>

//____By:sirjan13____

#define ll long long int
#define mod 1000000007
#define st struct
#define show(a) for(i=0;i<a.size();i++) cout<<a[i]<<" ";
#define p printf
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define pb push_back
#define pi pair<int,int>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define long_zero 0ll
#define long_one 1ll

using namespace std;


int main() {
    fast_io()
    int n,x,q;
    cin>>n;
    vi a;
    cin>>x;
    a.pb(x);
    for(int i=1;i<n;i++){
        cin>>x;
        a.pb(a[i-1]+x);
    }
    cin>>q;
    while(q--){
        cin>>x;
        cout<<(lower_bound(a.begin(),a.end(),x)-a.begin())+1<<endl;
    }
	return 0;
}