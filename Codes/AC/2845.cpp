/*
Just Another Source code by -
 __        ______                               
 \ \      / /  _ \ _ __ __ _  __ _  ___  _ __   
  \ \ /\ / /| | | | '__/ _` |/ _` |/ _ \| '_ \  
   \ V  V / | |_| | | | (_| | (_| | (_) | | | | 
    \_/\_/  |____/|_|  \__,_|\__, |\___/|_| |_| 
                             |___/              
*/
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000003
#define pii pair<int,int>
#define VP vector< pii >
#define MOD 1000000007ll
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define all(v) (v).begin(),(v).end()
#define S(x) scanf("%d",&(x))
#define S2(x,y) scanf("%d%d",&(x),&(y))
#define SL(x) scanf("%lld",&(x))
#define SL2(x) scanf("%lld%lld",&(x),&(y))
#define P(x) printf("%d\n",(x))
#define FF first
#define SS second
using namespace std;
//int dx[]={1,0,0,-1},dy[]={0,1,-1,0};
set<pair<int, ll> > suff;
ll hashval[MAX], pw[MAX], invr[MAX];
ll val(char ch){
	return ch - 'a' + 1;
}
ll genHash(int l,int r){
	ll a = 0;
	if(l>0)
		a = hashval[l - 1];

	ll b = hashval[r];

	return (b - a + MOD)%MOD; 

}
ll findInv(ll x){
	ll y = MOD - 2, res = 1;
	while(y){
		if(y%2){
			res = (res * x)%MOD;
		}
		y/=2;
		x = (x*x)%MOD;
	}
	return res;
}
int main(){
string s;
cin>>s;
int l = s.length();
ll p = 26;
pw[0] = 1;
for(int i = 1; i<=l;++i){
	pw[i] = (pw[i-1]*p)%MOD;
}

ll inverse = findInv(p);

invr[1] = inverse;

for(int i=2; i<l; ++i){
	invr[i] = (invr[i-1]*inverse)%MOD;
}

hashval[0] = val(s[0]);

for(int i = 1; i<l; ++i){
	hashval[i] = (hashval[i-1] + pw[i]*val(s[i]))%MOD;
}

for(int i = l-1; i>=1;--i){
	suff.insert({l-i, (genHash(i,l-1) * invr[i])%MOD});
}

int low = 0, high = l - 2, mid, notNull = 1, prev = -1;
//while(low <= high){

//	mid = (low + high + 1)>>1;
for(int mid = l-2;mid>=0;--mid){
//cout<<low<<" "<<high<<" "<<mid<<endl;

	//if(prev==mid)
		//break;

	ll prefix_hsh = genHash(0,mid);

	//ll tmp_hsh = (prefix_hsh * pw[l - 1 - mid])%MOD;

	//ll suffix_hsh = genHash(l - 1 - mid,l - 1);

	if(suff.find({mid+1,prefix_hsh})!=suff.end()){
		//cout<<mid<<endl;
		int fl = 0;
		//cout<<mid<<endl;
		for(int i = 1; (i + mid) < (l - 1); ++i){
			ll curr_hsh = genHash(i, i + mid);

			ll chk_hsh = (prefix_hsh * pw[i])%MOD;

			if(chk_hsh == curr_hsh){
				notNull = 0;
				fl = 1;
				//cout<<mid<<endl;
				low = mid;
				break;
			}
		}
		//if(!fl){
		//	high = mid - 1;
		//}
	}
	//else{
	//	high = mid - 1;
	//}
	if(low==mid)
		break;
prev = mid;
}

if(notNull){
	cout<<"Just a legend\n";
}
else{
	for(int i = 0; i<=low; ++i){
		cout<<s[i];
	}
	cout<<"\n";
}



return 0;
}