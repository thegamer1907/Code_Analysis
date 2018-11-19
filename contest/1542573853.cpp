#include <iostream>
using namespace std;
int cnt=0;
int h,m,s,t1,t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)h=0;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	if(t1>t2)swap(t1,t2);
	if(t1<=h&&h<t2)cnt++;
	if(t1<=m/5&&m/5<t2)cnt++;
	if(t1<=s/5&&s/5<t2)cnt++;
	if(cnt==0||cnt==3)cout<<"YES";
	else cout<<"NO";
	return 0;
}