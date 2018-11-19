#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define F(i,a,b) for(int i=a;i<b;i++) 
#define RF(i,a,b) for(int i=a;i>b;i--) 
#define asd(x1,y1,x2,y2) (abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2))
using namespace std;
const int mxn=100+10,modl=1e7+7;
int n,m,nm,p,q,k,sum;
char a[mxn][mxn];
int main(){
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	//freopen("INPUT.txt","r",stdin);/////////////////
	cin>>a[0]>>n;
	bool s1=false,s2=false;
	F(i,1,n+1){
		cin>>a[1];
		if(a[1][0]==a[0][1]) s2=true;
		if(a[1][1]==a[0][0]) s1=true;
		if(a[0][0]==a[1][0]&&a[0][1]==a[1][1]) s1=s2=true;
	}
	if(s1&&s2) cout<<"yes";
	else cout<<"no";
	return 0;
}
//THX 4 HACKIN'. :)
