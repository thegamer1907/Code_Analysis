#include<iostream>
using namespace std;
int h[10];
int ans[4];
int main(){
	int n,k,a,now,tot,p=0;
	cin>>n>>k;
	for (int i = 0;i < n;++i){
		now = 1;
		tot = 0;
		for (int j = 0;j < k;++j){
			cin>>a;
			tot+=a*now;
			now*=2;
		}
		h[tot]++;
	}
	if (h[0] > 0) {
		cout<<"YES"<<endl;
		return 0;
	}
	int maxm = 1;
	for (int i = 0;i < k;++i){
		maxm*=2;
	}
	maxm--;
	for (int i = 1;i <= maxm;++i){
		for (int j = i+1;j <= maxm;++j){
			if (h[i] && h[j] && ((i&j) == 0)) {
				cout<<"YES"<<endl;
				return 0;
			} 
		}
	}
	
	now = 1;
	tot = 15;


	for (int i = 1;i < 4;++i){
		tot = maxm-now;
		int tmp = maxm^tot;
		p=0;
		for (int j = 0;j < 4;++j){
			int mi = 1;
			if (mi != tmp) ans[p++] = mi+tmp;
			mi*=2;
		}
		if ((h[ans[0]]&&h[ans[1]]&&h[maxm^(ans[0]|ans[1])]) 
		|| (h[ans[0]]&&h[ans[2]]&&h[maxm^(ans[0]|ans[2])])
		 || (h[ans[1]]&&h[ans[2]]&&h[maxm^(ans[1]|ans[2])])){
		 	cout<<"YES"<<endl;
		 	return 0;
		 }
		now*=2;
	}
	cout<<"NO"<<endl;
	return 0;
}