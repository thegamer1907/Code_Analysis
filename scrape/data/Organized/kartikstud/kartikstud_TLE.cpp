#include <bits/stdc++.h>
using namespace std;
int rem[100000];
int possible(int m,int k){
    int st=-1,ed=-1,i,shif_del=0,del=0,stp=0;
    unordered_set<int> us;
    for(i=0;i<m;i++){
        int ri=rem[i]-shif_del;
        if(st<=ri&&ed>=ri){
            del++;
        }
        else {
            stp++;ri-=del; shif_del+=del;
            if(ri<=ed){i--;continue;}
            int l = ri/k;
            if((k*l)==ri){
                st=(k-1)*l+1;
                ed = (k)*l;
            }
            else {st=k*l+1;ed = (l+1)*k;} i--;
        }
    }
    return stp;
}
int main() {
    int n,m,k,i,j,l,h;
	cin>>n>>m>>k;
	for(int i =0;i<m;i++)cin>>rem[i];
	l=0; h = m;
	cout<<possible(m,k);
	return 0;
}