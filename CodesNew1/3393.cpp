#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fio ios_base::sync_with_stdio(false)
#define pdl cout << "*" << endl
#define MOD 1000000007
#define INF 1000000000
#define INFLL 1000000000000000000ll
#define m_p make_pair
#define p_b push_back
#define ff first
#define ss second
#define lli long long int 
#define ulli unsigned long long int
using namespace std;
using namespace __gnu_pbds;
typedef pair<int, int> pii;
#define lop(i,a,b) for(lli i=a;i<b;i++)
#define lopr(i,a,b) for(lli i=a;i>=b;i--)

lli exp_mod(lli a,lli b,lli mod){
	lli ret=1;
	while(b){
		if(b%2==1){ ret*=a; ret%=mod; }
		b/=2;
		a=(a*a)%mod;
	}
	return ret;
}
lli inverse_mod(lli a,lli mod){
	return exp_mod(a,mod-2,mod);
}
struct data{
	int l;
	int r;
	int sum;
};
bool comp(data a,data b){
	return a.sum>b.sum;
}
int main(){
    fio;
    cin.tie(NULL);
   	int n;
   	cin>>n;
   	int m;
   	cin>>m;
   	vector<int> ar(n);
   	int mx=0;
   	lop(i,0,n){
   		cin>>ar[i];
   		if(mx<ar[i]){ mx=ar[i]; }
   	}
   	sort(ar.begin(),ar.end());
   	int ans=mx+m;
   	lop(i,0,n){
   		if(m==0){ break; }
   		int dif=mx-ar[i];
   		if(dif<m){ ar[i]+=dif; m-=dif; }
   		else if(m==dif){ ar[i]+=dif; m-=dif; }
   		else{
   			ar[i]+=m;
   			m=0;
   		}
   	}
   	int mn=0;
   	lop(i,0,n){ mn=max(mn,ar[i]); }
   	int add=m/n;
   	int mo=m%n;
   	mn+=add;
   	if(mo!=0){ mn++; }
   	cout<<mn<<" "<<ans<<endl; 
    return 0;
} 