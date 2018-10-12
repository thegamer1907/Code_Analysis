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
	int n;
	cin>>n;
	string s[n+5];
	f1(n){
		cin>>s[i];
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=(int)s[i].length();j++){
			if(s[i][j]<s[i+1][j])
				break;
			if(s[i][j]>s[i+1][j]){
				s[i]=s[i].substr(0,j);
				break;
			}
		}
	}
	f1(n){
		cout<<s[i]<<endl;
	}
}