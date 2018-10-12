#include <bits/stdc++.h>
#define Rawan ios_base::sync_with_stdio(0); cin.tie(0);
#define lln long long int
#define mod 1000000007
#define memset(arr,value)  memset(arr, value , sizeof arr)

using namespace std;

int main() {
	int n,m,cnt=0;
	string a,b;
	map<string,int> e,p;
	map<string,int>::iterator it,xt;
	cin>>n>>m;
	int x=n,y=m;
	while(n--){
		cin>>a;
		p[a]++;
	}
	while(m--){
		cin>>b;
		e[b]++;
			}
	for (it = p.begin() ; it!=p.end() ;it++){
		for (xt = e.begin() ; xt!=e.end() ; xt++){
			if(it->first==xt->first){
			cnt++;
		}
		}
	}
	if(cnt%2==1){
		x++;
	}
	if(x>y){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}