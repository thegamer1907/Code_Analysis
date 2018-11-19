#include<iostream>
#include<cstdio>
#include<string>
#include<set>
#include<cstring>
using namespace std;
int main(){
	string a;
	cin>>a;
	string b[200];
	int n,i;
	scanf("%d",&n);
	bool flag=0;
	set<int>fr,ba;
	for(i=1;i<=n;i++){
		cin>>b[i];
		if(b[i]==a || (b[i][0]==a[1] && b[i][1]==a[0] )){
			flag=1;
		}
		if(b[i][0]==a[1])fr.insert(i);
		if(b[i][1]==a[0])ba.insert(i);
	}
	
	if(fr.size()>=1 && ba.size()>=1 /*|| *fr.begin() != *ba.begin() */)flag=1;
	
	if(flag==1){
		printf("YES\n");
		return 0;
	}else{
		printf("NO\n");
		return 0;
	}
	
}