#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
typedef pair<int,int> PI;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	int dir=1;
	int t1m=5*t1%60,t2m=5*t2%60;
	int t1s=5*t1%60,t2s=5*t2%60;
	for(int i=t1;i!=t2;){
		if(i==h){
			dir=-1;
			break;
		}
		i++;
		if(i==13) i=1;
	}
	for(int i=t1m;i!=t2m;){
		if(i==m){
			dir=-1;
			break;
		}
		i++;
		if(i==60) i=0;
	}
	for(int i=t1s;i!=t2s;){
		if(i==s && i!=t1s){
			dir=-1;
			break;
		}
		i++;
		if(i==60) i=0;
	}
	if(dir!=-1) cout<<"YES\n";
	else{
		dir=2;
		for(int i=t1;i!=t2;){
			if(i==h && i!=t1){
				dir=-1;
				break;
			}
			i--;
			if(i==0) i=12;
			if(i==t2 && h==t2 && (s>0 || m>0)) dir=-1;
		}
		for(int i=t1m;i!=t2m;){
			if(i==m && i!=t1m){
				dir=-1;
				break;
			}
			i--;
			if(i==-1) i=59;
			if(i==t2m && m==t2m && s>0) dir=-1;
		}
		for(int i=t1s;i!=t2s;){
			if(i==s && i!=t1s){
				dir=-1;
				break;
			}
			i--;
			if(i==-1) i=59;
		}
		if(dir!=-1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}