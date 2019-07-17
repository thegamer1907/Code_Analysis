#include <bits/stdc++.h>
#define ll long long
using namespace std;
queue <ll> q;
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		int t;
		cin>>t;
		q.push(t);
	}
	ll now=k,cnt=0,knt=0;
	while(!q.empty()){
		int cc=0;
		while(q.front()-knt<=now&&!q.empty()){
			q.pop();
			cc++;
		}
		if(cc!=0){
			knt+=cc;
			cnt++;
		}
		else now+=k;
	}
	cout<<cnt<<endl;
}