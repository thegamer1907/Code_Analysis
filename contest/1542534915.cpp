#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int a[70];
int main(){
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	memset(a,0,sizeof(a));
	h*=5;
	t1*=5;
	t2*=5;
	h%=60;
	t1%=60;
	t2%=60;
	a[h]++;
	a[m]++;
	a[s]++;
	if(t1>t2) swap(t1,t2);
	int flag=0;
	for(int i=t1;i<t2;i++){
		flag+=a[i];
	}
	if(flag%3==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}