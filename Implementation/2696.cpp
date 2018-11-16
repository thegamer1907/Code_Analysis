#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define mod 1000000007
#define mp make_pair
#define pb emplace_back
#define fi first
#define se second
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define slld(t) scanf("%lld",&t)
#define plld(t) printf("%lld\n",t)
#define For(i,n) for(ll i=0;i<n;i++)
#define speed ios::sync_with_stdio(false); cin.tie(0)




using namespace std;


int main()
{


	int n;
	cin>>n;
	int h[n],a[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
        a[h[i]-1]=i+1;


	}

for(int i=0;i<n;i++){


	cout<<a[i]<<" ";
}	
    
    return 0;
}
