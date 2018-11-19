#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
inline int read(){
	char c;int rec=0;
	while((c=getchar())<'0'||c>'9');
	while(c>='0'&&c<='9')rec=rec*10+c-'0',c=getchar();
	return rec;
}
int dis[100005],data[16];
int n,m;
int main(){
	memset(data,0,sizeof(data));
	n=read();m=read();
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++)
			dis[i]=dis[i]*2+read();
		data[dis[i]]=1;
	}
	if(data[0]){cout<<"YES";return 0;}
	for(int i=0;i<(1<<m);i++){
		for(int j=0;j<(1<<m);j++){
			if(i==j)continue;
			if(data[i]&&data[j]){
				int x=i,y=j;
				int f=1;
				for(int k=0;k<m;k++){
					if(x%2&&y%2){f=0;break;}
					x/=2;y/=2;
				}
				if(f){cout<<"YES";return 0;}
			}
		}
	}cout<<"NO";
	return 0;
}
