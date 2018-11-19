#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define F(i,a,b) for(int i=a;i<b;i++) 
#define RF(i,a,b) for(int i=a;i>b;i--) 
#define asd(x1,y1,x2,y2) (abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2))
using namespace std;
const int mxn=100+10,modl=1e7+7;
int n,m,nm,p,t,q,k,sum;
int a[mxn];
int b[mxn];
int main(){
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	//freopen("INPUT.txt","r",stdin);/////////////////
	int h,s;
	cin>>h>>m>>s>>p>>t;
	if(m<5) m+=60;
	if(s<5) s+=60;
	if(t<p) swap(p,t);
	//m/=5,s/=5;
	if(s%5) b[s/5]=1;
	else a[s/5]=1;
	if(s!=60||m%5) b[m/5]=1;
	else a[m/5]=1;
	if(m!=60||s!=60) b[h]=1;
	else a[h]=1;
	F(i,1,13) {a[i+12]=a[i],b[i+12]=b[i];}
	bool s1=true,s2=true;
	F(i,p,t){
		if(a[i]||b[i]) {
			s1=false;
		}
	}
	if(a[t]) s1=false;
	F(i,t,p+12){
		if(a[i]||b[i]) {
			s2=false;
		}
	}
	//cout<<b[1];
	if(a[p+12]) s2=false;
	if(s1||s2) cout<<"yes";
	else cout<<"no";
	return 0;
}
//THX 4 HACKIN'. :)