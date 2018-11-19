#include<iostream>
#include<algorithm>
using namespace std;
const int N=300;
int n,i,h,m,s,t1,t2,vis[N],flag1=true,flag2=true;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>h>>m>>s>>t1>>t2;
	h*=5;t1=(t1*10)%120;t2=(t2*10)%120;
	if(m||s)vis[(h*2+1)%120]=true;else vis[h*2%120]=true;
	if(s)vis[(m*2+1)%120]=true;else vis[m*2%120]=true;
	vis[s*2%120]=true;
//	cout<<t1<<" "<<t2<<endl;
	if(t1>t2)swap(t1,t2);
	for(i=t1;i!=t2;++i,i%=120)if(vis[i]){
		flag1=false;break;
	}
	for(i=t1;i!=t2;--i,i=(i+120)%120)if(vis[i]){
		flag2=false;break;
	}
	if(flag1||flag2)cout<<"YES"<<endl;else cout<<"NO"<<endl;
	return 0;
}