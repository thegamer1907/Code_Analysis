#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100+10;
string str[MAXN];
string ss;

int main()
{
	int N;
	cin>>ss;
	cin>>N;
	for(int i=0;i<N;++i)	cin>>str[i];
	bool flag1,flag2;
	flag1=flag2=false;
	for(int i=0;i<N;++i)	if(str[i][0]==ss[1])	flag1=true;
	for(int i=0;i<N;++i)	if(str[i][1]==ss[0])	flag2=true;
	for(int i=0;i<N;++i)	if(str[i]==ss)			flag1=flag2=true;
	if(flag1&&flag2)	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}