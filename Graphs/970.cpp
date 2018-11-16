#include<iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<complex>
#include<queue>
#include<vector>
using namespace std;
int x[100010];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<n;++i)
		cin>>x[i];
	int now = 1;
	while(now<m){
		now+=x[now];
	}
	if(now-m)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}