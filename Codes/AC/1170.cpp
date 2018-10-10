#include<bits/stdc++.h>
#define rep(i,l,r) for (int i=l;i<=r;i++)
using namespace std;
map<string,int> mp;
string s;
int n,m,idx,vis[2005],a[2005];
vector<int> vec1,vec2;
bool cmp(int x,int y){
	return a[x]>a[y]||(a[x]==a[y]&&x<y);
}
int main(){
	scanf("%d%d",&n,&m);
	rep(i,1,n){
		cin>>s;
		if (!mp.count(s)) mp[s]=++idx;
		a[mp[s]]|=1; 
		vec1.push_back(mp[s]);	
	}
	rep(i,1,m){
		cin>>s;
		if (!mp.count(s)) mp[s]=++idx;
		a[mp[s]]|=2;
		vec2.push_back(mp[s]);
	}
	vec1.push_back(++idx);
	vec2.push_back(++idx);
//	for (int i=0;i<(int)vec1.size();i++) printf("%d ",vec1[i]);
//	for (int i=0;i<(int)vec2.size();i++) printf("%d ",vec2[i]); 
	sort(vec1.begin(),vec1.end(),cmp);
	sort(vec2.begin(),vec2.end(),cmp);
	int now1=0,now2=0,op=2;
//	puts("g");
	while (1){
		op=3-op;
		if (op==1) {
			while (vis[vec1[now1]]) now1++;
			if (now1==n) {puts("NO"); break;}
			vis[vec1[now1++]]=1; 	
		}
		else {
			while (vis[vec2[now2]]) now2++;
			if (now2==m) {puts("YES"); break;}
			vis[vec2[now2++]]=1;
		}
	}
	return 0;
}
