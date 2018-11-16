#include <bits/stdc++.h>
using namespace std;
int v1[10000];
int v2[10000];
int main(){
	//freopen("a.txt","r",stdin);
	int n,m;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>v1[i];
	}
	cin>>m;
	for(int i = 0 ; i < m ; i++){
		cin>>v2[i];
	}
	sort(v1,v1+n);
	sort(v2,v2+m);

	int a = 0, i = 0;
	int res = 0;
	while(i < n and a < m){
		if(abs(v1[i]-v2[a] ) <=1 ){
			res++;
			a++;
			i++;
		}else{
			if(v1[i] < v2[a]){
				i++;
			}else{
				a++;
			}
		}
	}
	cout<<res<<"\n";
	return 0;
}