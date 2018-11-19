#include<bits/stdc++.h>
using namespace std;
#define M 105
#define ll long long
#define P 1000000007
inline void Rd(int &res){
	char c;res=0;
	while(c=getchar(),!isdigit(c));
	do res=(res<<3)+(res<<1)+(c^48);
	while(c=getchar(),isdigit(c));
}
string str,a[M];
int main(){	
	cin>>str;
	int n,f=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n&&!f;i++){
		if(a[i]==str)f=1;
		for(int j=1;j<=n&&!f;j++){
			string tmp="";
			tmp+=a[i][1];tmp+=a[j][0];
			if(str==tmp)f=1;
		}
	}
	if(f)puts("YES");
	else puts("NO");
	return 0;
}
