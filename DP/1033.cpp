#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back
#define ll long long
#define Need_for_speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sz size()

typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef pair<int,ll> pil;
typedef pair<ll,int> pli;

int a[100001];

int main(){
	Need_for_speed;
	int n,cnt=0,mx=0;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1)sum++;
	}
	
	if(sum==n){
		cout<<sum-1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int z=1;z<i;z++){
				if(a[z]==1)cnt++;
			}
			for(int o=i;o<=j;o++){
				if(a[o]==0)cnt++;
			}
			for(int z=j+1;z<=n;z++){
				if(a[z]==1)cnt++;
			}
			mx=max(mx,cnt);
			cnt=0;
		}
	}
	cout<<mx;
	return 0;
}