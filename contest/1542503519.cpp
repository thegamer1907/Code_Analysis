#include <bits/stdc++.h>
using namespace std;

char pas[2], know[101][2], ans[4], tag;
int n;

int main()
{
	cin>>pas >>n;
	for(int i=1; i<=n; i++)
	{
		cin>>know[i];
		if(know[i][0]==pas[0] && know[i][1]==pas[1] || know[i][0]==pas[1] && know[i][1]==pas[0])  
            tag=1;  
        if(pas[0]==know[i][0])  
            ans[0]=1;  
        if(pas[1]==know[i][1])  
            ans[1]=1;  
        if(pas[0]==know[i][1])  
            ans[2]=1;  
        if(pas[1]==know[i][0])  
            ans[3]=1;  
	}
	if(ans[2] && ans[3]) tag=1;
	if(tag)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}