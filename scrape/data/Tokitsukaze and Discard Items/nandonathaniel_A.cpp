#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> pii;
pii V[100005];
LL a[100005];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	LL n,m,k;
	cin >> n >> m >> k;
	for(LL i=1;i<=m;i++){
		cin >> a[i];
		LL bagi=a[i]/k,sisa=a[i]%k;
		if(sisa!=0)bagi++;
		if(sisa==0)sisa=k;
		V[i]={bagi,sisa};
	}
	LL kel=V[1].first,now=1,awal=1,ans=0,add=0;
	while(now<=m){
		while(now<=m && (a[now]-add)/k+(LL)((a[now]-add)%k!=0)==kel)now++;
		//dari awal sampai now-1 itu valid
		//ada now-awal
		//cout << "awal " << awal << " sampai " << now-1 << endl;
		/*LL ki=now,ka=min(now+now-awal-1,m),res=-1;
		while(ki<=ka){
			LL mid=(ki+ka)/2;
			LL bagi=(a[mid]-add)/k,sisa=(a[mid]-add)%k;
			if(sisa!=0)bagi++;
			if(sisa==0)sisa=k;
			if(bagi==kel+1 && sisa<=now-awal){
				res=mid;
				ki=mid+1;
			}
			else ka=mid-1;
		}*/
		add+=(now-awal);
		//cout << "res " << res << endl;
		awal=now;
		/*if(res!=-1){
			for(LL i=now;i<=res;i++){
				a[i]-=add;
				LL bagi=a[i]/k,sisa=a[i]%k;
				if(sisa!=0)bagi++;
				if(sisa==0)sisa=k;
				V[i]={bagi,sisa};
			}
		}*/
		kel=(a[now]-add)/k+(LL)((a[now]-add)%k!=0);
		ans++;
	}
	cout << ans << endl;
	return 0;
}