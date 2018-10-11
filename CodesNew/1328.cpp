#include<cstdio>
#include<string>
#include<iostream>
#define ll long long
using namespace std;
ll getPrice(ll curr,ll N,ll n,ll p){
	if(N > 0 && (N*curr-n) > 0) return (N*curr - n) * p;
	else return 0;
}
int main(){
	string st;
	int b,s,c,pb,ps,pc,B=0,S=0,C=0;
	ll r;
	cin>>st;
	scanf("%d%d%d%d%d%d",&b,&s,&c,&pb,&ps,&pc);
	cin>>r;
	for(unsigned int i=0;i<st.size();i++)
		if(st[i] == 'B') B++;
		else if(st[i] == 'S') S++;
		else if(st[i] == 'C') C++;
	ll low = 0,mid, high = r /(B*pb + S*ps + C*pc) + 100,price = 0;
	while(low < high){
		mid = (low + high)/2;
		price = getPrice(mid,B,b,pb) + getPrice(mid,S,s,ps) + getPrice(mid,C,c,pc);
		if(price == r){
			low = high = mid;
			break;
		}
		else if(price < r) low = mid + 1;
		else high = mid - 1;
	}
	price = getPrice(low,B,b,pb) + getPrice(low,S,s,ps) + getPrice(low,C,c,pc);
	if(price <= r)
			cout<<high;
	else cout<<low-1;
	cout<<endl;
	return 0;
}
