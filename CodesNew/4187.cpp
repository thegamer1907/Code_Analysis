#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,l,p,q,x,y,z,a,b,c,f,n,m,r,M=1000000007;
	unordered_map<ll,ll> N;
    cin>>n>>m;
    ll B[m];
    vector<ll> A;
    vector<ll> :: iterator itr;
    for(i=0;i<n;i++){
        cin>>x;
        A.pb(x);
    }
    for(i=0;i<m;i++){
        cin>>B[i];
    }
    for(i=1;i<n;i++){
        A[i]=A[i]+A[i-1];
    }
    p=0;
    for(i=0;i<m;i++){
        itr=upper_bound(A.begin(),A.end(),B[i]+p);
        x=A.end()-itr;
        if(x==0){
            x=n;
            p=0;
        }
        else{
            p+=B[i];
        }
        cout<<x<<endl;
    }
	return 0;
}