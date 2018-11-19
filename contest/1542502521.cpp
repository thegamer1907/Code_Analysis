#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string st;
	cin>>st;
	int t;
	cin>>t;
	string st1;bool flag=false,flag1=false;
	for(int i=0;i<t;i++)
	{
	cin>>st1;

	if(st1[0]==st[1])
	{
		flag=true;
	}
	if(st1[1]==st[0])
	{
		flag1=true;
	}
	else if(!st.compare(st1)){flag=true;flag1=true;break;}

    }
    if(flag&&flag1)cout<<"YES";
    else cout<<"NO";

	return 0;
}