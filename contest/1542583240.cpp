#include<iostream>
#include<bitset>
using namespace std;
const int N=(1<<6);
typedef bitset<8> bit;
int v[N],n,k,i,bin[5],j,flag,x,y;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	for(bin[0]=1,i=1;i<=4;++i)bin[i]=bin[i-1]<<1;
	for(cin>>n>>k,i=1;i<=n;++i,v[x]++,x=0)
		for(j=0;j<k;++j){
			cin>>y;
			x+=bin[j]*y;
		}
	if(v[0])cout<<"YES"<<endl;
	else{
		for(i=0;i<=(1<<k)-1&&!flag;++i)if(v[i]&&bit(i).count()==1){
			for(j=0;j<=(1<<k)-1&&!flag;++j)if(v[j]&&(i&j)==0){
				flag=true;
			}
		}else if(v[i]&&bit(i).count()==2){
			for(j=0;j<=(1<<k)-1&&!flag;++j)if(v[j]&&(i&j)==0){
				flag=true;
			}
		}
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}