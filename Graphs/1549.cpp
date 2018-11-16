#include <iostream>  
#include <cstring>
#include <cstdio> 
#include <algorithm>
#include <cmath>  
#include <set>
using namespace std;
#define PI acos(-1.0)
#define fir first;
#define sec second;
typedef long long ll;

const int maxn=200000+5;
int zw[maxn<<2];
pair<int,int> G[maxn];
int ans[maxn];
int a[maxn];
int b[30]; 

int main(){
	int n,m;
	string s,ss,sss;
	while(cin>>n>>m){
		for(int i=1;i<n;i++){
			cin>>a[i];
		}
		int pos=1;
		while(pos<m){
			pos+=a[pos];
		}
		if(pos!=m) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0; 
}