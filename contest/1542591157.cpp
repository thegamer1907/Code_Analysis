#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char st[5];
char stp[10000000];
char ps[200][3];
int main(){
	int n,cnt=0;;
	scanf("%s",st);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%s",ps[i]);
	}
	for(register int i=1;i<=n;i++){
		for(register int j=1;j<=n;j++){
			stp[cnt++]=ps[i][0];
			stp[cnt++]=ps[i][1];
			stp[cnt++]=ps[j][0];
			stp[cnt++]=ps[j][1];
		}
	}
	for(register int i=1;i<=cnt;i++){
		if(stp[i-1]==st[0]&&stp[i]==st[1]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
