#include<bits/stdc++.h>
using namespace std;
int n,k,s,t,x;
set<int>d,p;
int main(){
	cin>>n>>k;s=1<<k;s--;
	for(int i=0;i<n;i++){
		t=0;
		for(int j=0;j<k;j++)
			cin>>x,t=t*2+x;
		if(!t)return puts("YES"),0;
		p.clear();
		for(auto x:d)
			if(t+x==(t|x))
				p.insert(t|x);
		for(auto x:p){//cout<<x<<endl;
		if(x)return puts("YES"),0;}
		d.insert(t);
	}
	puts("NO");
}
