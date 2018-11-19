#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int h,m,s,t1,t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;h%=12;
	int a[4];
	a[1]=s*3600;
	a[2]=m*3600+s*60;
	a[3]=h*18000+m*60+s;
	t1%=12;t2%=12;
	t1*=18000;t2*=18000;
	for(int i=t1;;i++){
		i%=216000;
		if(i==a[1]||i==a[2]||i==a[3])break;
		if(i==t2){cout<<"YES";return 0;}
	}
	for(int i=t1;;i--){
		i=(i+216000)%216000;
		if(i==a[1]||i==a[2]||i==a[3])break;
		if(i==t2){cout<<"YES";return 0;}
	}cout<<"NO";
	return 0;
}
