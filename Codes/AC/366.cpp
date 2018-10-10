#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define maxn 2005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
int pre1[maxn],pre2[maxn],cont[maxn];
int main(){
	int n;
	while(cin>>n){
		int now=18,cnt=0;
		while(cnt<n){
			now++;
			int t=0,tm=now;
			while(tm){
				t+=tm%10;
				tm/=10;
			}
			if(t==10)
				cnt++;
		}
		cout<<now<<endl;	
	}
}