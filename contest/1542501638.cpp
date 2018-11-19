#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
const long long inf=(long long)1e15;
int n,m,t[100003],p,q,a[100003];
long long w,f[25][100003];
void solve(int l,int r,int L,int R,int id){
    if(l>r) return;
    int mid=(l+r)/2,pos,u=std::min(mid,R);
    for(;q<mid;q++){
    	w+=t[a[q+1]],t[a[q+1]]++;
	}
    for(;p>u+1;p--){
    	w+=t[a[p-1]],t[a[p-1]]++;
	}
    for(;q>mid;q--){
    	t[a[q]]--,w-=t[a[q]];
	}
    for(;p<u+1;p++){
    	t[a[p]]--,w-=t[a[p]];
	}
    f[id][mid]=inf;
    for(int i=u;i>=L;i--){
        if(w+f[id-1][i]<f[id][mid]){
        	f[id][mid]=w+f[id-1][i],pos=i;
		}
        w+=t[a[i]];
		t[a[i]]++;
		p--;
    }
    solve(l,mid-1,L,pos,id),solve(mid+1,r,pos,R,id);
}
int main(){
	cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    }
    for(int i=1;i<=n;i++){
    	f[0][i]=inf;
	}
    p=1;
    for(int i=1;i<=m;i++){
    	solve(1,n,0,n,i),f[i][0]=inf;
	}
    cout<<f[m][n]<<endl;
	return 0;
}