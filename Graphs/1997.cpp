#include<bits/stdc++.h>
#define inf 68308930
#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d %d",&a,&b)
#define sccc(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf(a) printf("%d",a)
#define pff(a,b) printf("%d %d",a,b)
#define pfff(a,b,c) printf("%d %d %d",a,b,c)
#define pb(a) push_back(a)
#define em empty()
#define fr front()
#define cl clear()
#define sz size()
#define fri(b) freopen(b,"r",stdin)
#define fro(b) freopen(b,"w",stdout)

using namespace std;

vector< vector< int > > vec;

int arr[100013];
int n,m,say,bas;
int visit[100013];
int tut[100013];

void gez(int k){
	visit[k]=1;
	if(arr[k]==0 && vec[k].size()!=0){
		say=0;
		tut[k]=0;
	}
	if(vec[k].size()==1 && say<=m && k!=1){
		bas++;
	}
	for(int af=0;af<vec[k].size();af++){
		say=tut[k];
		if(visit[vec[k][af]]!=1){
			say+=arr[vec[k][af]];
			tut[vec[k][af]]=say;
			if(say<=m){
				gez(vec[k][af]);
			}
			else{
				say--;
			}
		}
	}	
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n+1;i++){
		vector<int> a;
		vec.pb(a);
	}
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		int a1,b;
		cin>>a1>>b;
		vec[a1].pb(b);
		vec[b].pb(a1);
	}
	if(arr[1]==1){
		say=1;
	}
	tut[1]=1;
	gez(1);
	cout<<bas;
	
	

	return 0;
}
