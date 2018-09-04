#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000000 + 10;
const int M = 1000000007;
const double eps = 1e-9;
const double PI = acos(-1);
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back 
#define all(c) (c).begin(),(c).end()
int n,z[N],l,r;
char s[N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%s", s);
	n=strlen(s);
	for(int i=1; i<n; ++i){
		if(i>r){
			l=r=i;
			while(r<n && s[r]==s[r-l])
				++r;
			z[i]=r-l;
			--r;
		}else{
			int k=i-l;
			if(z[k]<r-i+1)
				z[i]=z[k];
			else{
				l=i;
				while(r<n && s[r]==s[r-l])
					++r;
				z[i]=r-l;
				--r;
			}
		}
	}
	int ans=0,mx=0;
	for(int i=1; i<n; ++i){
		if(z[i]==n-i && mx>=n-i){
			ans=n-i;
			break;
		}
		mx=max(mx,z[i]);
	}
	if(!ans)
		puts("Just a legend");
	else{
		s[ans]=0;
		printf("%s\n", s);
	}

	return 0;	
}