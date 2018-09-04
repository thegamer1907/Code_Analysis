#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define x first
#define y second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//string hashing

const ll mod[2]={(ll)1e9+7,(ll)1e9+9};
ll prime[2]={31,41};
ll iprime[2];//generate inverse prime
const ll maxn=1e6+9;
ll prefix[maxn][2];
ll iprimepow[maxn][2];//generate inverse powers

ll fastpow(ll a,ll b,ll m){
	if(b==0)
		return 1LL;
	ll temp=fastpow(a,b/2,m);
	temp=(temp*temp)%m;
	if(b%2!=0)
		temp=(temp*a)%m;
	return temp;
}

void generateHash(string& s){
	ll p[2]={1LL,1LL};
	for(int i=0;i<s.size();i++){
		for(int j=0;j<2;j++){
			prefix[i+1][j]=(prefix[i][j]+(s[i]-'a'+1)*p[j])%mod[j];
			p[j]=(p[j]*prime[j])%mod[j];
		}
	}
}


void precompute(){
	for(int i=0;i<2;i++)
		iprime[i]=fastpow(prime[i],mod[i]-2,mod[i]);
	iprimepow[0][0]=1;
	iprimepow[0][1]=1;
	for(int i=1;i<maxn;i++){
		for(int j=0;j<2;j++){
			iprimepow[i][j]=(iprimepow[i-1][j]*iprime[j])%mod[j];
		}
	}
}

ll getHashValue(int l,int r,int p){
	ll value=((prefix[r+1][p]-prefix[l][p])%mod[p]+mod[p])%mod[p];
	value=(value*iprimepow[l][p])%mod[p];
	return value;
}

//end of string hashing
string s;
int bsearch(int l,int r){
	if(l==r)
		return l;
	int mid=(l+r+1)/2;
	ll ref[2]={getHashValue(0,mid-1,0),getHashValue(0,mid-1,1)};
	bool match=false;
	for(int i=1;i<(s.size()-mid) && !match;i++){
		ll temp[2];
		for(int j=0;j<2;j++)
			temp[j]=getHashValue(i,i+mid-1,j);
		if(ref[0]==temp[0] && ref[1]==temp[1])
			match=true;
	}
	if(match)
		return bsearch(mid,r);
	else
		return bsearch(l,mid-1);
}

int main()
{
	fastread;
	
	cin>>s;
	precompute();
	generateHash(s);
	int len=bsearch(0,s.size());
	while(len){
		int match=0;
		for(int j=0;j<2;j++){
			if(getHashValue(0,len-1,j)==getHashValue(s.size()-len,s.size()-1,j))
				match++;
		}
		if(match==2)
			break;
		len--;
	}
	if(len<=0)
		cout<<"Just a legend";
	else{
		for(int i=0;i<len;i++)
			cout<<s[i];
	}
	return 0;
}