#include <bits/stdc++.h>
#define LL long long
#define mp make_pair
#define pb push_back
#define INF (1<<29)
using namespace std;
typedef pair<int,int>pii;
int n,sum;
int a[110];
pii mi;
int minn;
int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(n==1){
		if(a[1]==1)puts("0");
		if(a[1]==0)puts("1");
		return 0;
	}
	for(int i=1;i<n;i++){
		for(int j=i;j<=n;j++){
			int c[2];
			c[0]=c[1]=0;
			for(int k=i;k<=j;k++)c[a[k]]++;
			int t=sum+(c[0]-c[1]);
			if(minn<t)minn=t,mi=mp(i,j);
		}
	}
	cout<<minn<<endl;
//	cout<<mi.first<<' '<<mi.second<<endl;
	return 0;
}
