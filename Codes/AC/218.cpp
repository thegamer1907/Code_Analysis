#include <bits/stdc++.h>

using namespace std; 	
typedef long long ll;
typedef unsigned long long ull;
const int N = 1e5+50;
const int oo = 1e9;
const int mod = 1e9+7;

pair<int,int> p[N];
int main(){
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		p[i] = {sum+1,sum+a};
		sum+=a;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a;
		scanf("%d",&a);
		int md,lo=0,hi=n;
		while(lo<=hi){
			md = (lo+hi)/2;
			if(a>=p[md].first && a<=p[md].second){
				printf("%d\n", md+1);
				break;
			}
			if(a<p[md].first){
				hi = md-1;
			}else{
				lo = md+1;
			}
		}
	}
}