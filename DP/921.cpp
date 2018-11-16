#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) (v).begin(), (v).end()
#define trace(x) cerr << #x << ": " << x <<endl;
#define rep(i,a,b) for(int i = int(a); i <int(b);i++)
#define rrep(i,a,b,j,c,d) for(int i = int(a); i <int(b);i++) for(int j = int(c); j <int(d);j++)
using namespace std;

typedef long long lli;
typedef pair<lli, lli> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

pair<pair<int,int>,pair<int,int> > kadane(vector<int>& A,int n){
	//rep(i,0,sz(A)) cout<<A[i]<<" ";
	//cout<<endl;
	ii resp1,resp2;
	pair<pair<int,int>,pair<int,int> > tottal;
	lli sum_ante,sum=0,ans=0,longest=0,len,k1=0,k2=0,k3=0;
	sum+=A[0];
	if(sum>=ans) longest=max(longest,len), ans=sum;
	else ans=ans;
	if(sum<0) sum=0,len=0,k1=1,k2=1,k3=1;
	else len=1;
//	cout<<k1<<" "<<k3<<endl;
	rep(i,1,n){
		sum_ante=sum; sum+=A[i]; len++;		
		if(sum>=ans) longest=max(longest,len), ans=sum,k3=i,k1=k2;
		else ans=ans;
		if(sum<0) sum=0,len=0,k2=i+1;
	}
	resp1=mp(longest,ans);resp2=mp(k1,k3);
	tottal=mp(resp1,resp2);
	return tottal;
}


int main(){
	fastio;
	lli num,n,lenght,maximun,init,final;
	pair<pair<int,int>,pair<int,int> > data;

	cin>>n;
	if(n!=1){
	vi A,aux;	
	pair<int,int> ans;
	
	rep(i,0,n){
		cin>>num;
		A.pb(num);
		if(num==1) aux.pb(-1);
		else aux.pb(1);
	}
	data=kadane(aux,n);
	lenght=data.first.first;maximun=data.first.second;init=data.second.first; final=data.second.second;
//	cout<<endl<<init<<" "<<final<<endl;
	for(int i=init;i<=final;i++){
		if(A[i]==0) A[i]=1;
		else A[i]=0;
	}
	lli cont=0;
	
	rep(i,0,sz(A)){
	//	cout<<A[i]<<" ";
		if(A[i]==1) cont++;
	}
	cout<<cont;
	}
	else{
		int bb;
		cin>>bb;
		
		if(bb==1) cout<<0;
		else cout<<1;
	}

	return 0;
}