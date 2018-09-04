#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 200005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
	
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int cont[n+5][m+5]={};
	fr(i,1,n+1){
		fr(j,1,m+1){
			cin>>cont[i][j];
		}
	}
	int maxx[n+5]={};
	fr(i,1,m+1){
		int p1=1,p2=1;
		while(p1<=n){
			if(cont[p1][i]<=cont[p1+1][i]){
				p1++;
			}
			else{
				fr(j,p2,p1+1)
					maxx[j]=max(maxx[j],p1);
				p1++,p2=p1;
			}
		}
		fr(j,p2,p1){
			maxx[j]=max(maxx[j],p1-1);
		}
	}
	int q;
	cin>>q;
	while(q--){
		int add1,add2;
		cin>>add1>>add2;
		if(maxx[add1]>=add2){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}