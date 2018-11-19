#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
set<int>S;
bool DFS(int now,int BIT){
	if(BIT<0)return 0;
	bool re=0;
	if(S.find(now)!=S.end())return 1;
	if(now&(1<<BIT))re=re||DFS(now^(1<<BIT),BIT);
	if(re)return re;
	re=re||DFS(now,BIT-1);
	return re;
}
int main(){
	int n,k;
	cin>>n>>k;
	int temp;
	for(int i=1;i<=n;i++){
		int now=0;
		for(int j=0;j<k;j++){
			cin>>temp;
			now=now|(temp<<j);
		}
		S.insert(now);
	}
	bool ok=0;
	for(auto w:S){
		int now=0;
		for(int i=0;i<k;i++){
			if(!((1<<i)&w))now|=(1<<i);
		}
		ok=DFS(now,k-1);
		if(ok) break;
	}
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}