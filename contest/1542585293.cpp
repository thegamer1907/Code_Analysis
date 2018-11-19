#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
double TIME[5];
bool cmp(int a,int b){
	return TIME[a]<TIME[b];
}
int main(){
	int r[5];
	for(int i=0;i<5;i++)cin>>TIME[i],r[i]=i;
	TIME[0]*=5;
	TIME[1]+=TIME[2]/60.0;
	TIME[0]+=TIME[1]/60.0;
	TIME[3]*=5;
	TIME[4]*=5;
	sort(r,r+5,cmp);
//	for(int i=0;i<5;i++)cout<<TIME[r[i]]<<endl;
	bool ok=0;
	for(int i=0;i<5;i++){
		if(r[(i-1+5)%5]==3&&r[(i+5)%5]==4||r[(i-1+5)%5]==4&&r[(i+5)%5]==3)ok=1;
	}
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}