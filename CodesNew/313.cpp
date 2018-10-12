#include<bits/stdc++.h>
using namespace std;
int n,t,a,ans,k,maj;
queue <int> que;
int main(){
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a;
		que.push(a),k++;
		maj+=a;
		while(maj>t){
			maj-=que.front();
			que.pop(),k--;
		}
		ans=max(ans,k);
	}
	cout<<ans;
}
