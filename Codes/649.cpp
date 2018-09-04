#include<bits/stdc++.h>
using namespace std;
#define N 10010
bool judge(int x){
	int s=0;
	while(x){
		s+=x%10;
		x/=10;
		if(s>10){
			return false;
		}
	}
	if(s==10){
		return true;
	}
	return false;
}
int n,cnt,rans,a[N];
void init(){
	for(int i=19;cnt<N;i++){
		if(judge(i)){
			a[cnt++]=i;
		}
	}
}
int main(){
//	freopen("2.txt","r",stdin);
	cin>>n;
	init();
	cout<<a[n-1]<<endl;
	return 0;
}
