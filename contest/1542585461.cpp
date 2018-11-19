#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000 + 10;
const int M = 1000000007;
const double PI = atan(1) * 4;
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back 
#define all(c) (c).begin(),(c).end()
int n,k,fr[20];

void yes(){
	cout<<"YES";
	exit(0);
}
void no(){
	cout<<"NO";
	exit(0);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	cin>>n>>k;
	for(int i=0; i<n; ++i){
		int x=0;
		for(int a,j=0; j<k; ++j){
			scanf("%d",&a);
			if(a)
				x|=1<<j;
		}
		++fr[x];
	}
	if(fr[0])
		yes();
	for(int i=0; i<(1<<k); ++i){
		for(int j=i+1; j<(1<<k); ++j){
			if(!fr[i] || !fr[j])
				continue;
			int ct[5]={};
			for(int t=0; t<k; ++t)
				if(i&(1<<t))
					++ct[t];
			for(int t=0; t<k; ++t)
				if(j&(1<<t))
					++ct[t];
			bool f=1;
			for(int t=0; t<k; ++t)
				if(ct[t]>1)
					f=0;
			if(f)
				yes();
		}
	}

	no();
}


