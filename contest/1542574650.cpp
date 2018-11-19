#include<bits/stdc++.h>
#define ll long long
#define ull usigned long long
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define F(i,a,b) for(int i=a;i<b;i++) 
#define RF(i,a,b) for(int i=a;i>b;i--) 
#define asd(x1,y1,x2,y2) (abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2))
using namespace std;
const int mxn=1e5+10,modl=1e7+7;
int n,m,nm,p,t,k,sum;
int ps[16];
int main(){
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	//freopen("INPUT.txt","r",stdin);/////////////////
	cin>>n>>m;
	queue<int>q[4];
	bitset<4>u;
	F(i,0,n){
		F(j,0,m){
			cin>>t; u[j]=t;
			//if(!t) a[i]++;q[j].push(i);
		}
		ps[u.to_ulong()]=1;//cout<<i<<" "<<u.to_ulong()<<" "<<u<<endl;
		F(j,0,(1<<m)){
			bitset<4>r(j);bool sdd=true;
			F(k,0,4){
				if(u[k]&&r[k]) sdd=false;
			}
			if(sdd&&ps[j]){
				//cout<<i<<" "<<j<<" ";
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
	/*
	while(true){
		int b[4];
		F(i,0,m) {
			if(q[i].empty()){
				cout<<"no";
				return 0;
			}
			else {
				b[i]=q[i].front();
			}
		}
		sort(b,b+m);
		int sss=0;
		F(i,1,m) if(b[i]!=b[i-1]) sss++;
		if(sss<2||m==1) {cout<<"yes";return 0;}
		F(i,0,m) if(q[i].front()==b[0]) q[i].pop();
	}
	*/
	return 0;
}
//THX 4 HACKIN'. :)
