#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll rem[100000];
ll possible(ll m,ll k){
    ll st=-1,ed=-1,i,shif_del=0,del=0,stp=0;
    for(i=0;i<m;i++){
        ll ri=rem[i]-shif_del;
        if(st<=ri&&ed>=ri){
            del++;
        }
        else {
            stp++;ri-=del; shif_del+=del; del=0;
            if(ri<=ed){i--;continue;}
            ll l = ri/k;
            if((k*l)==ri){
                st=(k-1)*l+1;
                ed = (k)*l;
            }
            else {st=k*l+1;ed = (l+1)*k;} 
            i--;
        }
    }
    return stp;
}
int main() {
    ll n,m,k,i,j,l,h;
	cin>>n>>m>>k;
	for(int i =0;i<m;i++)cin>>rem[i];
	l=0; h = m;
	cout<<possible(m,k);
	return 0;
}